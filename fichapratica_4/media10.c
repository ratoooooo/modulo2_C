#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	 system("cls");
	 setlocale(LC_ALL, "Portuguese");
	 
	 int i, num, total;
	 
	 
	 i = 1;
	 total= 0;
	 
	 while(i <= 10)
	 {
	 	printf("Insira um número \n");
	 	scanf("%d",&num);
	 	
	 	total += num;
	 	i++;
	 }
	 
	 printf("A media é igual %.1f", (float)total/10);
	
	 
	
}
