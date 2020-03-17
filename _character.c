#include "holberton.h"
/**
 * _character - function that prints character
 * @valist: list of arguments
 * Return: length (i)
 */


int _character(va_list valist)
{
	int i = 0;

	_putchar(va_arg(valist, int));
	i++;
	return (i);
}
