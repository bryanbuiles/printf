#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct opf - struct
 * @por: operator porcentaje
 * @f: pointer to functions.
 */

typedef struct opf
{
	char *por;
	int (*f)();
} commands_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _string(va_list string);
int _character(va_list valist);
int _decimal(va_list valist);
int _reverse(va_list valist);
int get_op(const char *format, commands_t *array, va_list valist);
#endif
