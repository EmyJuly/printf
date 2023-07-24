#include "main.h"
#include <stddef.h>

/**
 * _puts - prints a string
 * @str: string
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
