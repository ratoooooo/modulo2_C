#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()

{
    system("cls");

    float turm, man,wom, perman, perwom;

    printf("Insira o numero de rapazes e de raparigas da turma\n");
    scanf("%f%f", &man, &wom);

    turm = man + wom;

    perman = (man/turm)*100;
    perwom = (wom/turm)*100;

    printf("A turma tem %.0f alunos, a percentagem de meninos is %.0f e a percentagem de meninas is %.0f\n", turm, perman, perwom);

     system("pause");
}