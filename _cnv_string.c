#include "main.h"
#include <stddef.h>

/**
 * _cnv_string - prints a string
 * @str: string
 *
 * Return: number of characters printed
 */
int _cnv_string(char *str)
{
	int char_count;

	if (str == NULL)
		str = "(null)";

	for (char_count = 0; str[char_count] != '\0'; char_count++)
		_putchar(str[char_count]);

	return (char_count);
}
