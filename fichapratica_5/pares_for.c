#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=2;i<=200;i+=2)
    {
        if (i % 2 == 0)
        {
        printf("%d\n", i);
        }
    }
    
}
