#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");

  	int i, num; 
  	
  	printf("Insira um numero ");
	scanf("%d", &num); 
	
  	for (i=1; i <= num; i++) 
  	{
      printf("%d ", i); 
    
  	}  
  
}
