#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    system("cls");

    int dia, res;
    printf("Insira o numero da semana sabendo que 0 corresponde a sabado, 1 corresponde a domingo e assim em diante\n");
    scanf("%d", &dia);

    res = dia % 7;
    switch (res)
    {
        case 0:
            printf ("Sabado!!");
            break;
        case 1:
            printf ("Domingo!");
            break;
        case 2:
            printf ("Segunda-Feira!!");
            break;
        case 3:
            printf ("Terca-Feira");
            break;
        case 4:
            printf("Quarta-Feira!!");
            break;
        case 5:
            printf("Quinta-Feira!!");
            break;
        case 6:
            printf("Sexta-Feira!!");
            break;
        default:
            printf("Nao valido!!");
    }

    system("pause");
}