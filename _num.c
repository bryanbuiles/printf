#include "holberton.h"
/**
*fun_printf_num - function print numbers
*@num: variable number
*@len: lenght number
*Return: counter
*/
int fun_printf_num(unsigned int num, int len)
{
        if (num / 10)
                len = fun_printf_num(num / 10, len);
        _putchar(num % 10 + '0');
        return (len + 1);
}
