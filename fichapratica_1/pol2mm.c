#include <stdio.h>
void main()
{
    float mm, pol;

    printf("Valor em polegadas: ");
    scanf("%f", &pol);

    mm = (float) pol*25.4;

    printf("%.2f polegadads sao %.2f mm\n", pol, mm);
}