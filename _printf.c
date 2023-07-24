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
	int char_count = 0;

	switch (s)
	{
		case 'c':
			char_count += _putchar(va_arg(args, int));
			break;
		case 's':
			char_count += _cnv_string(va_arg(args, char *));
			break;
		case '%':
			char_count += _putchar('%');
			break;
		case 'd':
		case 'i':
			char_count += _cnv_signedint(va_arg(args, int));
			break;
		case 'b':
			char_count += _cnv_binary(va_arg(args, unsigned int));
			break;
		case 'u':
			char_count += _cnv_unsignedint(va_arg(args, unsigned int));
			break;
		case 'o':
			char_count += _cnv_octal(va_arg(args, unsigned int));
			break;
		case 'x':
			char_count += _cnv_hexadecimal(va_arg(args, unsigned int), 1);
			break;
		case 'X':
			char_count += _cnv_hexadecimal(va_arg(args, unsigned int), 0);
			break;
		default:
			break;
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
	if (s == 'c' || s == 's' || s == '%' || s == 'd' || s == 'i'
			|| s == 'b' || s == 'u' || s == 'o' || s == 'x' || s == 'X')
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
		if (format[i] == '%' && format[i + 1] != '\0'
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