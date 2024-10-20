#include <stdio.h>

int main()
{

    double a, media;
    int cont, condicao;
    cont = 0;
    media = 0;
    condicao = 1;

    while (condicao != 2)
    {
        while (cont < 2)
        {
            scanf("%lf", &a);
            if (a >= 0 && a <= 10)
            {
                media = media + a;
                cont++;
            }
            else
                printf("nota invalida\n");
        }
        cont = 0;
        media = media / 2;
        printf("media = %.2lf\n", media);
        media = 0;
        while (condicao != 2 || condicao != 1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &condicao);
            if (condicao == 1 || condicao == 2)
            {
                break;
            }
        }
    }

    return 0;
}