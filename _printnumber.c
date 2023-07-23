#include "main.h"

/**
 * _printnumber - prints a number 
 * @n: number 
 * 
 * Return: number of characters printed 
 */
int _printnumber(int n)
{
	int x, digit, char_count = 0;
	
	if (n < 0)
	{
		x = -n;
		char_count += 1;
	}
	else
	{ 
		x = n;
	}
	if (x == 0)
	{	
		_putchar('0');
		char_count += 1;
	}
	else
	{
		while (x != 0)
		{
			digit = x % 10;
			_putchar(digit + '0');
			x /= 10;
			char_count += 1;
		}
	}
	return (char_count);
}
