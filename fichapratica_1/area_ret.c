#include <stdio.h>
void main()
{
    float larg, comp, area; 
    printf("Qual a largura?\n");
    scanf ("%f", &larg);

    printf("Qual o comprimento?\n");
    scanf("%f", &comp);

    area = larg * comp;
    printf("A area e de %.2f", area); 
}