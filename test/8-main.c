#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
	int n = 42;
	printf("The number is %+d\n", n);
	_printf("The number is %+d\n", n);
	printf("The number is % d\n", n);
	_printf("The number is % d\n", n);
	/*printf("The number is %#d\n", n);*/
	/*_printf("The number is %#d\n", n);*/
	printf("The number is %d\n", n);
	_printf("The number is %d\n", n);
	return 0;
}
