#include <stdio.h>

void main()
{
    float not1, not2, not3, med;

    system("cls");

    printf("Insira tres numeros: \n");
    scanf("%f%f%f",&not1,&not2, &not3);

    med = (not1 + not2 + not3)/3;

    printf ("A media das notas: %.2f\n", med);

    if (med >= 10)
        printf("O aluno esta aprovado \n\n");
    else
        printf("O aluno esta reprovado \n\n");

    system("pause");
}