#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	 system("cls");
	 setlocale(LC_ALL, "Portuguese");
	 
	 int i, num, total;
	 
	 
	 total= 0;
	 
	 for(i=1;i <= 10; i++)
	 {
	 	printf("Insira um n�mero \n");
	 	scanf("%d",&num);
	 	
	 	total += num;
	 	
	 }
	 
	 printf("A media � igual %.1f", (float)total/10);
	
	 
	
}
