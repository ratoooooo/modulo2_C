#include <stdio.h>
void main()
{
    float num1, num2, soma;
    printf("Insira o primeiro numero:");
    scanf("%f", &num1);

    printf("Insira o segundo numero:");
    scanf("%f", &num2);

    soma = num1 + num2;
    printf("A soma dos dois numeros e %.2f", soma);
}