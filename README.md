###\_printf:
##Feitures

- printf created with some functions (i, d, s,%, c). cohort 11 Holberton project.

# Prototype Function:

`int _printf(const char *format, ...);`

###Description:

-A standard printf is a built-in C function in stdio.h standard library. It has a return type int and accepts variable arguments.

###Return:
-Upon successful return, printf returns the number of characters printed (excluding the null byte used to end output to strings).
If an output error is encountered, a negative value is returned.

###Format specifiers:

| Specifier type | Description                                       |
| -------------- | ------------------------------------------------- |
| c              | Single character                                  |
| s              | String of characters                              |
| d or i         | Signed decimal integer                            |
| %              | Two %% characters will write a single % character |

###Example:

    #include "holberton.h"
                  int main(void)
                    {
                    _printf("%s\n", "HELLO, HOLBERTON");
                    return (0;)
                    }

###Output:

`HELLO, HOLBERTON`

###Compilation:

`$ gcc -Wall -Werror -Wextra -pedantic *.c`

###Authors:

| Authors                 | Email                    |
| ----------------------- | ------------------------ |
| Bryan Builes            | 1482@holbertonschool.com |
| Valeria Alvarez Giraldo | 1553@holbertonschool.com |
| Diego Alejandro Rojas   | 1232@holbertonschool.com |
