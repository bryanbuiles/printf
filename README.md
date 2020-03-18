<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>README.md</title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css" 
    integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">
</head>
<body>
    <h1>_printf</h1>
    <h4>Features:</h4>

    <p>printf created with some functions (i, d, s,%, c). cohort 11 Holberton project.</p>

    <h4>Prototype Function:</h4>

    <table class="egt">

        <tr>
      
          <td>int _printf(const char *format, ...);</td>
      
        </tr>

    <h4>Description:</h4>
    <p>A standard printf is a built-in C function in stdio.h standard library. It has a return type int 
        and accepts variable arguments.</p>

        <h4>return:</h4>

        <p>Upon successful return, printf returns the number of characters printed (excluding the null 
            byte used to end output to strings).

            If an output error is encountered, a negative value is returned.</p>

            <h4>Format specifiers:</h4>

            <table class="egt">

                <tr>
              
                  <th>Specifier type</th>
              
                  <th>Description</th>
              
              
                </tr>
              
                <tr>
              
                  <td>c</td>
              
                  <td>Single character</td>
              
              
                </tr>
              
                <tr>
              
                  <td>s</td>
              
                  <td>String of characters</td>
              
              
                </tr>
              
                <tr>
              
                  <td>d or i</td>
              
                  <td>Signed decimal integer</td>

              
                </tr>

                <tr>
              
                    <td>%</td>
                
                    <td>Two %% characters will write a single % character</td>
  
                
                  </tr>
              
              </table>

              <h4>Example:</h4>

              <p>#include "holberton.h"
                  int main(void)
                    {
                    _printf("%s\n", "HELLO, HOLBERTON");
                    return (0;)
                    }</p>

                    <h4>Output:</h4>
    
                <p>HELLO, HOLBERTON</p>

                <h4>Compilation:</h4>

                <p>$ gcc -Wall -Werror -Wextra -pedantic *.c</p>

                <h4>Authors:</h4>

                <p>

                    Bryan Builes            --- 1482@holbertonschool.com
                    
                    Valeria Alvarez Giraldo --- 1553@holbertonschool.com
                 
                    Diego Alejandro Rojas   --- 1232@holbertonschool.com
                    
                </p>
    


</body>
</html>

