#include <stdio.h>
void main()
{
    float larg, comp, perimetro; 

    printf("Insira a largura?\n");
    scanf ("%f", &larg);

    printf("Insira o comprimento?\n");
    scanf("%f", &comp);

    perimetro = larg + comp;
    printf("O perimetro e de %.2f", perimetro);
}