#include <stdio.h>

void main()

{
    system("cls");

    int nota;

    printf("Insira a nota do aluno ");
    scanf("%d", &nota);

    if (nota >= 10)
        printf("O aluno esta aprovado \n\n");
    else
        printf("O aluno esta reprovadpo \n\n");

    system("pause");
}