#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");

    int maior=0, num, i=1;

        while (i <= 10)
        {
            printf("Digite um n�mero ");
            scanf("%d", &num);

            if( num > maior)
                maior=num;

            i++;
        }

        printf("O maior n�mero � o: %d\n", maior);
        
        system("pause");
}

