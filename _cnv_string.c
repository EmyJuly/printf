#include "main.h"

/**
 * _cnv_string - converts non printable char
 * @args: va_list arguments
 * @flags: flag
 * Return: number of characters printed
 */
int _cnv_string(va_list args, __attribute__ ((unused)) char flags)
{
	char *str = va_arg(args, char *);
	int char_count, asciicode, i, x = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char arr[15];

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		asciicode = (int)str[i];
		if ((asciicode > 0 && asciicode < 32) || asciicode >= 127)
		{
			_putchar('\\');
			_putchar('x');
			char_count += 2;
			do {
				arr[x++] = hex_digits[asciicode % 16];
				asciicode /= 16;
			} while (asciicode != 0);
			if (x == 1)
			{
				_putchar('0');
				char_count++;
			}
			while (x > 0)
			{
				_putchar(arr[--x]);
				char_count++;
			}
		}
		else
			char_count += _putchar(str[i]);
	}
	return (char_count);
}
