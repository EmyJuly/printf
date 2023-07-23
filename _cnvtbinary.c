#include "main.h"

/**
 * _cnvbinary - converts an unsigned int to binary
 * @n: number to convert
 *
 * Return: numnber of characters printed
 */
int _cnvbinary(int n)
{
	int bit_pos, bit_val, started = 0, char_count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = ~n + 1;
		char_count += 1;
	}

	bit_pos = sizeof(n) * 8 - 1;
	while (bit_pos >= 0)
	{
		bit_val = (n & (1 << bit_pos)) != 0;
		if (bit_val || started)
		{
			_putchar('0' + bit_val);
			char_count += 1;
			started = 1;
		}
		bit_pos--;
	}

	if (char_count == 0)
	{
		_putchar('0');
		char_count++;
	}
	return (char_count);
}
