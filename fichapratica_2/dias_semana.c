#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    system("cls");

    int dia_sem;

    printf("Introduza um numero inteiro de 0 a 6:\n");
    scanf("%d", &dia_sem);

   switch( dia_sem)

   {
      case 0:
        printf("Domingo\n");
        break;

      case 1:
        printf("Segunda-feira\n");
        break;

      case 2:
        printf("Terca-feira\n");
        break;

      case 3:
        printf("Quarta-feira\n");
        break;

      case 4:
        printf("Quinta-feira\n");
        break;

      case 5: 
        printf("Sexta-feira\n");
        break;

      case 6:
        printf("Sabado\n");
        break;

      default: printf("Invalido!!, este numero nao corresponde a nenhum dia da semana\n");
   }

   system("pause");
}