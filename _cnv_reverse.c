#include "main.h"

/**
 * _cnv_reverse - reverses string
 * @args: va_list arguments
 * @flags: flag
 * Return: number of characters printed
 */
int _cnv_reverse(va_list args, char flags)
{
	char *str = va_arg(args, char *);
	(void)flags;
	int char_count, j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	char_count = j;
	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(str[j]);
	return (char_count);
}
