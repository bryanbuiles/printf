#include "holberton.h"

/**
 * get_op - determina cual data type escoger
 * @format: entrada
 * @array: operacion de la estructura de arrays
 * @valist: variadic list
 * Return: lleva a la function correcta que va a imprimir el printf
 */

int get_op(const char *format, commands_t *array, va_list valist)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char str;

	str = format[i];
	for (i = 0; str;)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
		}
		if (str == '%')
		{
			j = 0;
			i = i + 1;
			str = format[i];
			for (j = 0; array[j].por && str != *(array[j].por); j++)
			{
			}
			if (array[j].por)
				k += array[j].f(valist);
			else
			{
				if (!str)
					return (-1);

				if (str != '%')
					k += _putchar('%');
				k += _putchar(str);
			}
		}
		else

			k += _putchar(str);
		i++;
		str = format[i];
	}
	return (k);
}
