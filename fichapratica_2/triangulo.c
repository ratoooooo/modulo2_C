#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    float lado1, lado2, lado3;
    printf("Quais os lados do triangulo?\n");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("O triangulo is equilatero");
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        printf("O triandulo is isosceles");
    }
    else
        printf("O triangulo is escaleno");

    system("pause");

}