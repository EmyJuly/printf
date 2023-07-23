#include "main.h"

/**
 * _cnvbinary - converts an unsigned int to binary
 * @n: number to convert
 *
 * Return: numnber of characters printed
 */
int _cnvbinary(int n)
{
	int i, leading_zero = 1, char_count = 0;

	for (i = 31; i >= 0; i--)
	{
		int bit = (n >> i) & 1;

		if (bit)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
		char_count += 1;
	}
	return (char_count);
}
