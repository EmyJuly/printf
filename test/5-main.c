#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	void *addr;
	void *intPtr;
	addr = (void *)0x7ffe637541f0;
   	intPtr	= (void *)NULL;

	printf("Address:[%p]\n", addr);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", intPtr);
	_printf("Address:[%p]\n", intPtr);
	return (0);
}
