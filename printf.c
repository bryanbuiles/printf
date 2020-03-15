#include "holberton.h"
/**
 * _printf - imprimira una entrada simulando la funcion printf
 * @format: entrada
 *  Return: El data type correcto a la stdout
 */

int _printf(const char *format, ...)
{
	va_list valist; /* argument list that going to print data type */

	commands_t asc[] = {  /* array de estructuras que contiene el caracter especifico */
		{"c", _char},
		{"s", _string},
		{"d", _decimal},
		{"i", _decimal},
		{"%", _percent},
		{NULL, NULL}
	};

	va_start(valist, format);

 /* falta completar la funcion */

	va_end(valist);
	return (); /* falta definir el returno */
}
