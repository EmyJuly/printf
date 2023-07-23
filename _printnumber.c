#include "main.h"

/**
 * _printnumber - prints a number
 * @n: number
 *
 * Return: number of characters printed
 */
int _printnumber(int n)
{
	int j, char_count = 0;
	char arr[15];
	unsigned int x;
	char sign = '\0';


	if (n == 0)
	{
		_putchar('0');
		char_count++;
		return (char_count);
	}

	if (n < 0)
	{
		x = n * -1;
		sign = '-';
	}
	else
	{
		x = n;
	}

	while (x > 0)
	{
		arr[char_count] = (x % 10) + '0';
		x /= 10;
		char_count++;
	}

	arr[char_count + 1] = sign;
	char_count += 1;

	for (j = char_count ; j >= 0; j--)
		_putchar(arr[j]);

	return (char_count);
}
