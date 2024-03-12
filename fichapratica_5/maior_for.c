#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");

    int maior=0, num, i;

        for (i=1; i <= 10; i++)
        {
            printf("Digite um número ");
            scanf("%d", &num);

            if( num > maior)
                maior=num;

        }

        printf("O maior número é o: %d\n", maior);
        
        system("pause");
}

