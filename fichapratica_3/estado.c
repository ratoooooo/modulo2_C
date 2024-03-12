#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    system ("cls");

    char estado;
    char nome[20];

    printf("Insira o nome \n");
    gets(nome);

    printf("Digite o seu estado civil (apenas uma letra)");
    scanf("%c",&estado);

    switch (tolower(estado))
    {
        case 's':
        case 'S':
            printf("Solteiro\n");
            break;  
        case 'D':
        case 'd':
            printf("Divorciado\n");
            break;  
        case 'C':
        case 'c':
            printf("Casado\n");
            break;  
        case 'V':
        case 'v':
            printf("Viuvo\n");
            break;         
        default:
            printf("Nao existe isso");
    }

    printf("Atualmente o estado civil do %s is %c\n ", nome, estado);

    system("pause");
}