#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <unistd.h>

typedef int (*specifier_function)(va_list, char);

/**
 * struct specifier_mapping - maps specifier
 * @specifier: specifier
 * @function: specifier fonction
 */
typedef struct specifier_mapping
{
	char specifier;
	specifier_function function;
} specifier_mapping;

int _putchar(char c);
int _cnv_char(va_list args, char flags);
int _cnv_printstr(va_list args, char flags);
int _cnv_signedint(va_list args, char flags);
int _cnv_binary(va_list args, char flags);
int _cnv_unsignedint(va_list args, char flags);
int _cnv_octal(va_list args, char flags);
int _cnv_hexadecimal(va_list args, char flags);
int _cnv_heXadecimal(va_list args, char flags);
int _cnv_string(va_list args, char flags);
int _cnv_pointer(va_list args, char flags);
int _cnv_reverse(va_list args, char flags);
int _cnv_rot13ed(va_list args, char flags);
int _printf(const char *format, ...);

#endif
