#include "main.h"

/**
 * _cnv_hexadecimal - converts unsigned int to hexa
 * @n: number to convert
 * @h: flag
 *
 * Return: number of characters printed
 */
int _cnv_hexadecimal(unsigned int n, int h)
{
	int j, char_count = 0;
	char *hex_digits;
	char arr[15];

	if (h)
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	do {
		arr[char_count++] = hex_digits[n % 16];
		n /= 16;
	} while (n != 0);

	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(arr[j]);

	return (char_count);
}
