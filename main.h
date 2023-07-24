#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

int _cnv_string(char *str);
int _cnv_signedint(int n);
int _cnv_binary(unsigned int n);
int _cnv_unsignedint(unsigned int n);
int _cnv_octal(unsigned int n);
int _cnv_hexadecimal(unsigned int n, int h);

int _printf(const char *format, ...);

#endif
