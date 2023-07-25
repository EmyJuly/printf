#include "main.h"
#include <stddef.h>

/**
 *
 */
int _cnv_pointer(void *p)
{
	int j, char_count = 0;
	char *hex_digits;
	char arr[64];
	size_t pointer;

	hex_digits = "0123456789abcdef";
	pointer = (size_t) p;

	do {
		arr[char_count++] = hex_digits[pointer % 16];
		pointer /= 16;
	} while (pointer != 0);

	_putchar('0');
	_putchar('x');
	char_count += 2;
	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(arr[j]);

	return (char_count);
}
