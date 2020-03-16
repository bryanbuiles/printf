#include "holberton.h"

/**
 * _character - function that prints character
 * @valist - list of arguments
 * Retunr - i as counter
 */

int _character(va_list valist)
{
	int i = 0;

	_putchar(va_arg(valist, int));
	i++;
	return (i);
}
