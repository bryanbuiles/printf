#include "holberton.h"

/**
 * _string - prints a string
 * @string: argumento pasado del retorno como una string
 * Return: number of char printed
 */

int _string(va_list string)
{
	int i=0;
	char *p;

	p = va_arg(string, char *);

	if (p == NULL)
		p = "(null)";

	for (i = 0; p[i]; )
		{
			i += _putchar(p[i]);
		}
	return(i);
}
