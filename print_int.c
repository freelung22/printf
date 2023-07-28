#include "main.h"

/**
 * print_int - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of the numbers in decimal
 **/
int print_int(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
