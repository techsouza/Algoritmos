#include<stdio.h>
#include <string.h>

int main()

{
    int caso, quantidade, soma=0, total=0;

    char frutas[50]={0};

    while(scanf("%d", &caso) != 0)
    {
        if(caso == 0)
            break;
        for(; caso > 0; caso--)
        {
            scanf("%d", &quantidade);
            getchar();
            gets(frutas);
                if(strcmp(frutas, "suco de laranja") == 0)
                    soma = 120 * quantidade;
                else if(strcmp(frutas, "morango fresco") == 0)
                    soma = 85 * quantidade;
                else if(strcmp(frutas, "mamao") == 0)
                    soma = 85 * quantidade;
                else if(strcmp(frutas, "goiaba vermelha") == 0)
                    soma = 70 * quantidade;
                else if(strcmp(frutas, "manga") == 0)
                    soma = 56 * quantidade;
                else if(strcmp(frutas, "laranja") == 0)
                    soma = 50 * quantidade;
                else if(strcmp(frutas, "brocolis") == 0)
                    soma = 34 * quantidade;

            total = total + soma;
        }
        if(total < 110)
            printf("Mais %d mg\n", 110-total);
        else if(total > 130)
            printf("Menos %d mg\n", total-130);
        else if(total >=110 && total <=130)
            printf("%d mg\n", total);

        soma = total = 0;
    }
    return 0;
}
