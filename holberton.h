#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct opf
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
int fun_printf_s(va_list valist);
int fun_printf_int(va_list valist);
int fun_printf_num(unsigned int num, int len);







#endif
