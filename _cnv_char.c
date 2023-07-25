#include "main.h"

/**
 * _cnv_char - Convert and print a character
 * @args: va_list arguments
 * @flags: flag
 * Return: number of characters printed
 */
int _cnv_char(va_list args, __attribute__ ((unused)) char flags)
{
	char c = va_arg(args, int);
	int char_count = _putchar(c);

	return (char_count);
}
