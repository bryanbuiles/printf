#include "holberton.h"
/**
 * fun_printf_s - print strings and %
 * @*s: pointer
 * Return: Always 0
 */
int fun_printf_s(va_list valist)
{
char *s;
			
s = va_arg(valist, char *);
			{
				s = _putchar('%');
			}
			return (s);
}
