#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    system("cls");

    float pre_vend, pre_comp, luc;

    printf("Insira o preco de venda do computador\n");
    scanf("%f", &pre_vend);

    printf("Insira o preco de compra do computador\n");
    scanf("%f", &pre_comp);

    if (pre_vend > pre_comp)
    {
    luc = pre_vend - pre_comp;
    printf("Obtivemos lucro %.2f euros \n", luc);
    }
    else
    {
    printf("Obtivemos prejuizo ou nem gahamos e nem perdemos");
    }



     system("pause");


}
