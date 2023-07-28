#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _strlen(const char *);
int print(char *);
char *itoa(long int, int);
int _printf(const char *, ...);
int handler(const char *, va_list);
int percent_hand(const char *, va_list, int *);
int print_str(va_list);
int print_char(va_list);
int print_int(va_list);
int print_bin(va_list);
int print_rot13(va_list);
int print_unsigned(va_list);
int print_oct(va_list);
int print_hexadec_low(va_list);
int print_hexadec_upp(va_list);
int print_point(va_list);
int print_rev_str(va_list);
int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
