#include "main.h"

/*
 * _cnv_octal - ..
 * @n: ..
 *
 * Return: ..
 */
int _cnv_octal(unsigned int n)
{
	int j, char_count = 0;
	char arr[15];

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
