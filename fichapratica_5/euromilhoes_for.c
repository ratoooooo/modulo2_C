#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main()
{
	 system("cls");
	 setlocale(LC_ALL, "Portuguese");
	 
	 int i;
	 
	 printf("Gerador de 5 numeros aleatorios\n");
	 
	 srand(time(NULL));
	 
	 for(i=1; i <= 5; i++)
	 {
		
		printf("%d ", rand() % 50);
	 }
	 
	 
	 

	 
}
