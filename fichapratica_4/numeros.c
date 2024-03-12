#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");

  	int i = 1, num; 
  	
  	printf("Insira um numero ");
	scanf("%d", &num); 
	
  	while (i <= num) 
  	{
      printf("%d ", i); 
    
      i++;
  	}  
  
}
