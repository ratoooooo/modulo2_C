#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()

{
    system("cls");

    float IMC, alt, pes;



    printf("Introduza a altura em (m)");
    scanf("%f", &alt);

    printf("Introduza o peso em (kg)");
    scanf("%f", &pes);

    IMC = (float)pes / (alt * alt) ;

    printf("O IMC is %f \n", IMC);

    if (IMC < 18.5)
        printf("%f is Magressa\n", IMC);
    else if ((IMC >= 18.5) && (IMC < 25.9))
    {
        printf(" %f is Normal\n", IMC);
    }
    else if ((IMC >= 26) && (IMC < 29.9))
    {
        printf("%f is Sobrepeso\n", IMC);
    }
    else if ((IMC >= 30) && (IMC <35))
    {
        printf(" %f Obesidade grau I\n", IMC);
    }
    else if ((IMC >= 35) && (IMC < 40))
    {
        printf(" %f Obesidade grau 2\n", IMC);
    }

        system("pause");
}