#include "main.h"

/**
 * _cnv_heXadecimal - converts unsigned int to hexa
 * @args: va_list arguments
 *
 * Return: number of characters printed
 */
int _cnv_heXadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int j, char_count = 0;
	char *hex_digits;
	char arr[15];

	hex_digits = "0123456789ABCDEF";

	do {
		arr[char_count++] = hex_digits[n % 16];
		n /= 16;
	} while (n != 0);

	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(arr[j]);

	return (char_count);
}
