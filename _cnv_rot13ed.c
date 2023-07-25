#include "main.h"

/**
 * _cnv_rot13ed - prints the rot13'ed string
 * @args: va_list arguments
 * @flags: flag
 * Return: number of characters printed
 */
int _cnv_rot13ed(va_list args, __attribute__ ((unused)) char flags)
{
	char *str = va_arg(args, char *);
	int i, j, char_count = 0;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char converted_char;

	for (i = 0; str[i] != '\0'; i++)
	{
		converted_char = str[i];
		for (j = 0; j < 52; j++)
		{
			if (str[i] == s1[j])
			{
				converted_char = s2[j];
				break;
			}
		}
		_putchar(converted_char);
		char_count++;
	}
	return (char_count);
}
