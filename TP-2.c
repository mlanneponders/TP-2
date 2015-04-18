/* Ejercicio 1-10
*  Lanneponders Yonadi, Matías
*  18/04/2015
*/

    #include <stdio.h>

    int main(void){
    int c;
    while((c=getchar())!=EOF)
    {
        if (c!='\t'&&c!='\b'&&c!='\\')
        {
            putchar(c);
        }
        else
        {
            if(c=='\t')
            {
                putchar('\\');
                putchar('\\t');
            }
            if(c=='\b')
            {
                putchar('\\');
                putchar('\\b');
            }
            if(c=='\\')
            {
                putchar('\\');
                putchar('\\');
            }
        }
    }
    }
