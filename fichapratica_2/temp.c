#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>>

void main()
{
    system("cls");

    char cidade1[20];
    char cidade2[20];
    float temp1, temp2, medtemp;

    printf("Insira o nome das cidades \n");
    gets(cidade1);

    printf("Insira o nome das cidades \n");
    gets(cidade2);

    printf("Insira a temperatura de %s \n", cidade1);
    scanf("%f", &temp1);

    printf("Insira a temperatura de %s \n", cidade2);
    scanf("%f", &temp2);

    medtemp = (temp1 + temp2) / 2;
    printf("A media das cidades is %f\n", medtemp);

    if (temp1 > temp2)
    {
        printf("Em %s a temperatura is maior do que em %s\n ", cidade1, cidade2);
    }
    else if (temp2 > temp1)
    {
        printf("Em %s a temperatura is maior do que em %s\n ", cidade2, cidade1);
    }
    else
    {
        printf("A temperatura nas duas cidades is igual");
    }

    system("pause");
}