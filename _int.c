#include "holberton.h"
/**
 * fun_printf_int - function print integer
 * @num: vsr num
 * Return: int counter
 */
int fun_printf_int(va_list valist)
{
int num;
int con = 0;
unsigned int un;
num = va_arg(valist, int);
                if (num < 0)
        {
                un = num * -1;
                _putchar('-');
                con = fun_printf_num(un, con);
                con += 1;
        }
        else
        {
                un = num;
                con = fun_printf_num(un, con);
        }
        return (con);

