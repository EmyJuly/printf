#include "main.h"

/**
 * _cnv_octal - converts an unsigned int to octal
 * @args: va_list arguments
 *
 * Return: number of characters printed
 */
int _cnv_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int j, char_count = 0;
	char arr[15];

	if (n == 0)
	{
		_putchar('0');
		char_count++;
		return (char_count);
	}

	while (n > 0)
	{
		arr[char_count] = (n % 8) + '0';
		n /= 8;
		char_count++;
	}

	arr[char_count] = '\0';

	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(arr[j]);

	return (char_count);
}
