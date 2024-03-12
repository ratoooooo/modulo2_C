#include <stdio.h>
#include <stdlib.h>

void main()
{
	system("cls");
	
	int num, i;
	
	printf("Digite um numero\n");  
    scanf("%d", &num);
    
    
    for(i=1; i <= 10; i++)
    {
    
    	printf("%d X %d = %d\n", num, i, i * num);
    }

		system("PAUSE");
}
