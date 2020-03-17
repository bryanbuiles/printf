#include <limits.h>
#include "holberton.h"/**
		       * main - Entry point
		       *
		       * Return: Always 0
		       */
int main(void)
{
int len;
int len2;


len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
printf("----------------------------------\n");
len = _printf("len %d hola\n", 1323333);
len2 = printf("len %d hola\n", 1323333);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("len %%\n");
len2 = printf("len %%\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
printf("----------------------------------\n");
len = _printf("len %c hola\n", 'z');
len2 = printf("len %c hola\n", 'z');
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("len %s hola %c more %s txt\n", "string", 'z', "asdasd");
len2 = printf("len %s hola %c more %s txt\n", "string", 'z', "asdasd");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
printf("----------------------------------\n");
len = _printf("len %c hola %k\n", 'z');
len2 = printf("len %c hola %k\n", 'z');
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("%s\n",(char *)0);
len2 = printf("%s\n",(char *)0);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("123%s456\n", NULL);
len2 = printf("123%s456\n", NULL);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf(NULL);
len2 = printf(NULL);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("asd%\n");
len2 = printf("asd%\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

return(0);
}
