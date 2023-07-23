#include "main.h"

/**
 * _printnumber - prints a number
 * @n: number
 *
 * Return: number of characters printed
 */
int _printnumber(int n)
{
	int digit, i, j, char_count = 0, is_negative = 0;
	char a[15];

	if (n == 0)
	{
		_putchar('0');
		char_count++;
		return (char_count);
	}
	
	
	if (n < 0)
	{
		n = -n;
		is_negative++;
	}

	i = 0;
	while (n != 0)
	{
		digit = n % 10;
		a[char_count] = digit + '0';
		n /= 10;
		i++;
		char_count++;
	}

	if (is_negative == 1)
	{
		_putchar('-');
		 char_count++;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(a[j]);

	return (char_count);
}
