#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
    for(num=1; num <= 10; num++)
    {
    	printf("O quadrado de %d � %d\n", num,num*num );
    	
	}

}
    
