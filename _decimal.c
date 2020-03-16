#include <stdarg.h>
#include "holberton.h"

/** _decimal - function that prints digits
 * @valist: list of arguments
 * Return: i as a counter
 */

int _decimal(va_list valist)
{
	int i = 0;
	int mod = 1;
	int digit;
	unsigned int dig;

	digit = va_arg(valist, int);
	if (digit < 0)
	{
		_putchar('-');
		dig = digit * -1;
		i++;
	}
	else
		dig = digit;
	while (dig / mod > 9)
	{
		mod = mod * 10;
	}
	while (mod > 0)
	{
		_putchar(dig / mod + '0');
		dig = dig % mod;
		mod = mod / 10;
		i++;
	}
	return (i);
}
