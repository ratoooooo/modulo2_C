#include <stdio.h>
void main()
{
    float farenheit, Celcius;
    
    printf("Graus farenheit:");
    scanf("%f", &farenheit);

    Celcius =(float)5/9 * (farenheit - 32);
    printf("%.2f graus farenheit sao %.2f graus celcius\n", farenheit, Celcius);
}