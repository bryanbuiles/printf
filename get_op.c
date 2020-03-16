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
	char str; /* caracter que se va a ir imprimiendo atravez del ciclo */

	str = format[i];

	for (i = 0; str; ) /* recorriendo la string que nos envian */
		{
			if (format[i] == '%' && format[i +1] == '%')
			{
				_putchar('%');
			}
			if (str == '%')
			{
				j = 0; /* se me vuelva a inicializar cada vez que encuentre un % */
				i = i + 1; /* aumenteme una posicion despues del % */
				str = format[i];
				for (j = 0; array[j].por && str != *(array[j].por); j++) /* recorriendo la array de estructura hasta encontrar lo que coicida */
					{
					}
					if (array[j].por) /* entra si encontro coicedencia */
						k += array[j].f(valist);
			}
			else
				k += _putchar(str); /*imprime caracter */
			i++; /*aumento */
			str = format[i]; /* pone la variable como entrada de nuevo */
		}
	return (k);
}
