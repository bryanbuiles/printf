#include "holberton.h"
/**
 * _reverse - Reverse function
 * @valist: variadic list
 * Return: 0
 */
int _reverse(va_list valist)
{
	char *k;
	int i, j, count = 0;
k = va_arg(valist, char *);
	for (i = 0; k[i] != '\0'; i++)
		count++;
	for (j = count - 1; j >= 0; j--)
		_putchar(k[j]);
	return (0);
}
