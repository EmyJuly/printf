#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int unsigned_value = 12345;
	unsigned int octal_value = 123;
	unsigned int hex_lower_value = 255;
	unsigned int hex_upper_value = 255;

	printf("u: %u\n", unsigned_value);
	_printf("u: %u\n", unsigned_value);
	printf("o: %o\n", octal_value);
	_printf("o: %o\n", octal_value);
	printf("x: %x\n", hex_lower_value);
	_printf("x: %x\n", hex_lower_value);
	printf("X: %X\n", hex_upper_value);
	_printf("X: %X\n", hex_upper_value);
	return (0);
}
