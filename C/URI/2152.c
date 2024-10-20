#include<stdio.h>
int main()
{
int hora, minuto, porta, n;
        scanf("%d", &n);

        for(; n>0; n--)
        {
                scanf("%d %d %d", &hora, &minuto, &porta);
                if(porta == 1 && hora < 10 && minuto < 10)
                        printf("0%d:0%d - A porta abriu!\n", hora, minuto);
                else if(porta == 0 && hora < 10 && minuto < 10)
                        printf("0%d:0%d - A porta fechou!\n", hora, minuto);
                else if(porta == 1 && hora >=10 && minuto >= 10)
                        printf("%d:%d - A porta abriu!\n", hora, minuto);
                else if(porta == 1 && hora >=10 && minuto < 10)
                        printf("%d:0%d - A porta abriu!\n", hora, minuto);
                else if(porta == 1 && hora < 10 && minuto >= 10)
                        printf("0%d:%d - A porta abriu!\n", hora, minuto);
                else if(porta == 0 && hora >=10 && minuto < 10)
                        printf("%d:0%d - A porta fechou!\n", hora, minuto);
                else if(porta == 0 && hora < 10 && minuto >= 10)
                        printf("0%d:%d - A porta fechou!\n", hora, minuto);

                else
                        printf("%d:%d - A porta fechou!\n", hora, minuto);

        }

return 0;
}


