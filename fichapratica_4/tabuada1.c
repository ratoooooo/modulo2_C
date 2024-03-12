#include <stdio.h>
#include <stdlib.h>

void main()
{
	system("cls");
	
	int num, i;
	
	i=0;
	
	printf("Digite um numero\n");
    scanf("%d", &num);
    
    
    while( i <= 10)
    {
    	i++;
    	printf("%d X %d = %d\n", num, i, i * num);
    }

		system("PAUSE");
}
