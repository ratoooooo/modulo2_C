#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()

{
    system("cls");

    char operacao;
    int num1, num2, fez_cauc;
    float result;

    
    printf("Insira a expressao\n");
    scanf("%d%c%d", &num1, &operacao, &num2);

    switch (tolower(operacao))

    {
        case '+':
            result = num1 + num2;
            fez_cauc = 1;
            break;

        case '-':
            result = num1 - num2;
            fez_cauc = 1;
            break;

        case ':':
            if (num2 != 0)
            {
            result = num1 / num2;
            }
            else
            {
            printf("Divisivel por zero is impossivel\n");
            fez_cauc = 0;
            }
            break;

        case 'X':
        case 'x':
           result = num1 * num2;
           fez_cauc = 1;
            break;

        default:
            printf("operacao invalida\n");
            break;
    }

        if ("fez_cauc = 1")
        printf("%d %c %d = %.1f \n\n", num1,operacao, num2, result);
    
        

       system("pause");
} 