#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()

{
    system("cls");

    float IMC;
    int alt, peso;


    printf("Introduza a altura em (cm)");
    scanf("%d", &alt);

    printf("Introduza o peso em (kg)");
    scanf("%d", &peso);

    IMC = (float)peso / alt * alt;

    printf("O IMC is %f", IMC);

    system("pause");
}