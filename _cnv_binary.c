#include "main.h"
#include <limits.h>

/**
 * _cnv_binary - converts an unsigned int to binary
 * @n: number to convert
 *
 * Return: numnber of characters printed
 */
int _cnv_binary(unsigned int n)
{
	int char_count = 0;
	unsigned int r = 1, i, j, sum = 0;
	unsigned int a[32];

	r += INT_MAX;

	a[0] = n / r;

	for (i = 1; i < 32; i++)
	{
		r /= 2;
		a[i] = (n / r) % 2;
	}

	for (j = 0; j < 32; j++)
	{
		sum += a[j];
		if (sum || j == 31)
		{
			_putchar(a[j] + '0');
			char_count++;
		}
	}
	return (char_count);
}

