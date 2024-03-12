#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    system("cls");

    int num1, num2, num3;

    printf("Insira o numero 1\n");
    scanf("%d", &num1);

    printf("Insira o numero 2\n");
    scanf("%d", &num2);

    printf("Insira o numero 3\n");
    scanf("%d", &num3);

    if (num1>num2)
    {

        if (num2 > num3)
        {
        printf("O mneor numero is o 3");
        }

        else if (num2 < num3)
        {
        printf("O menor is o n umero 2");
        }

    }

    else if (num2 > num1)
    {

        if (num1 > num3)
        {
        printf("O mneor numero is o 3");
        }

        else if (num1 < num3)
        {
        printf("O menor is o numero 1\n");
        }

    }

    else if (num3 > num2)
    {

        if (num2 > num1)
        {
        printf("O mneor numero is o 1\n");
        }

        else if (num2 < num1)
        {
        printf("O menor is o n umero 2\n");
        }

    }

    system("pause");

}