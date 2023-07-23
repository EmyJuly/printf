#include "main.h"

/**
 * _printnumber - prints a number
 * @n: number
 *
 * Return: number of characters printed
 */
int _printnumber(int n)
{
	int digit, i, j, char_count;
	int a[11];

	char_count = 0;
	if (n == 0)
	{
		_putchar('0');
		char_count++;
		return (char_count);
	}

	if (n < 0)
	{
		_putchar('-');
		char_count++;
		n = -n;
	}
	i = 0;
	while (n != 0)
	{
		digit = n % 10;
		a[i] = digit + '0';
		n /= 10;
		i++;
		char_count++;
	}

	for (j = i - 1; a[j] != '\0'; j--)
		_putchar(a[j]);
	return (char_count);
}
