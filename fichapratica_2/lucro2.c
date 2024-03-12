#include <stdio.h>

void main()
{

    system("cls");

    float pre_vend, pre_comp, luc;

    printf("Insira o preco de venda\n");
    scanf("%f", &pre_vend);

    printf("Insira o preco de compra\n");
    scanf("%f", &pre_comp);

    luc = pre_vend - pre_comp;

        if (luc > 0)
            {
                 printf("Obtivemos lucro %.2f euros \n", luc);
            }

        else if (luc<0)
            {
                printf("Obtivemos prejuizo de %.2f euros \n", luc);
            }

        else 
            { 
                printf("Nao obtivemos lucro nem prejuizo");
            }
               
            
            system("pause");
}