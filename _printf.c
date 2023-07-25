#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * convert_specifier - substitutes specifier with the corresponding arg
 * @s: specifier
 * @args: va_list arguments
 *
 * Return: number of characters printed
 */
int convert_specifier(char s, va_list args)
{
	int char_count = 0, i, num_specifiers;

	const specifier_mapping specifiers[] = {
		{'c', _cnv_char},
		{'s', _cnv_printstr},
		{'d', _cnv_signedint},
		{'i', _cnv_signedint},
		{'b', _cnv_binary},
		{'u', _cnv_unsignedint},
		{'o', _cnv_octal},
		{'x', _cnv_hexadecimal},
		{'X', _cnv_heXadecimal},
		{'S', _cnv_string},
		{'p', _cnv_pointer},
		{'r', _cnv_reverse},
		{'R', _cnv_rot13ed},
	};

	num_specifiers = sizeof(specifiers) / sizeof(specifiers[0]);
	for (i = 0; i < num_specifiers; i++)
	{
		if (s == specifiers[i].specifier)
		{
			char_count += specifiers[i].function(args);
			break;
		}
	}
	return (char_count);
}

/**
 * check_specifier - checks whether the specifier is valid
 * @s: specifier
 *
 * Return: 1 when valid, 0 otherwise
 */
int check_specifier(char s)
{
	if (s == 'c' || s == 's' || s == 'd' || s == 'i'
			|| s == 'b' || s == 'u' || s == 'o' || s == 'x' || s == 'X'
			|| s == 'S' || s == 'p' || s == 'r' || s == 'R')
		return (1);
	else
		return (0);
}

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, char_count = 0;
	va_list args;

	if (format == NULL || (format[0] == '%'
				&& (format[1] == '\0' || format[1] == ' ')))
		return (-1);

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			break;
		if (format[i] == '%' && format[i + 1] == '%')
		{
			char_count += _putchar('%');
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] != '\0'
				&& check_specifier(format[i + 1]))
		{
			char_count += convert_specifier(format[i + 1], args);
			i += 2;
		}
		else
		{
			char_count += _putchar(format[i]);
			i += 1;
		}
	}
	va_end(args);
	return (char_count);
}
