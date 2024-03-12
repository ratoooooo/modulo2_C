#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	int num, i;
	
	num = 1;
	
    while( num <= 10)
    {
    	printf("O quadrado de %d é %d\n", num,num*num );
    	num++;
	}

}
    
    
