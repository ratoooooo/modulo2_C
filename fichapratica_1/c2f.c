#include <stdio.h>
void main()
{
    float farenheit, Celcius;
    
    printf("Graus Celcius:");
    scanf("%f", &Celcius);

    farenheit = (float) Celcius *1.8 + 32;

    printf("%.2f graus Celcius sao %.2f graus Farenwhite\n", Celcius, farenheit);
}