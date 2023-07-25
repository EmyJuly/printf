#include "main.h"

/**
 * _cnv_pointer - func
 * @args: va_list arguments
 * @flags: flag
 * Return: number of characters printed
 */
int _cnv_pointer(va_list args, __attribute__ ((unused)) char flags)
{
	void *p = va_arg(args, void *);
	char s[] = "(nil)";
	int i, j, char_count = 0;
	char *hex_digits;
	char arr[64];
	size_t pointer;

	if (p == NULL)
	{
		for (i = 0; s[i]; i++)
			_putchar(s[i]);
		return (i);
	}

	hex_digits = "0123456789abcdef";
	pointer = (size_t) p;

	do {
		arr[char_count++] = hex_digits[pointer % 16];
		pointer /= 16;
	} while (pointer != 0);

	arr[char_count++] = 'x';
	arr[char_count++] = '0';
	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(arr[j]);

	return (char_count);
}
