#include "holberton.h"
/**
 * _printf - imprimira una entrada simulando la funcion printf
 * @format: entrada
 * Return: El data type correcto a la stdout
 */

int _printf(const char *format, ...)
{
	va_list valist;
	int k;

	commands_t asc[] = {
		{"c", _character},
		{"s", _string},
		{"d", _decimal},
		{"i", _decimal},
		{"r", _reverse},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);

	va_start(valist, format);

	k = get_op(format, asc, valist);

	va_end(valist);
	return (k);
}
