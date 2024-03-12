#include <stdio.h>
void main()
{
    float num1, num2, mult;

    printf("Indica o primeiro numero:");
    scanf("%f", &num1);

    printf("Indica o segundo numero:");
    scanf("%f", &num2);

    mult = num1 * num2;
    printf("A multiplicacao dos dois numeros e %.2f", mult);
}