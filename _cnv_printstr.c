#include "main.h"

/**
 * _cnv_printstr - prints a string
 * @args: va_list arguments
 *
 * Return: number of characters printed
 */
int _cnv_printstr(va_list args)
{
	char *str = va_arg(args, char *);
	int char_count;

	if (str == NULL)
		str = "(null)";

	for (char_count = 0; str[char_count] != '\0'; char_count++)
		_putchar(str[char_count]);

	return (char_count);
}
