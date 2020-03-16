#include "holberton.h"
/**
 * _printf - imprimira una entrada simulando la funcion printf
 * @format: entrada
 * Return: El data type correcto a la stdout
 */

int _printf(const char *format, ...)
{
	va_list valist; /* argument list that going to print data type */
	int k;

	commands_t asc[] = {  /* array de estructuras que contiene el caracter especifico */
		{"c", _character},
		{"s", _string},
		{"d", _decimal},
		{"i", _decimal},
		/*{"%", fun_printf_s},*/
		{NULL, NULL}
	};

	va_start(valist, format);

	k = get_op(format, asc, valist);

	va_end(valist);
	return (k);
}
