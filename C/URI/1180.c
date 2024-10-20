#include<stdio.h>
int main()
{
  int menor, posicao=0, i, tam;
  int seq[2000]={0};
        scanf("%d", &tam);
        scanf("%d", &seq[0]);
        menor = seq[0];

                for(i=1; i<tam; i++)
                {
                scanf("%d", &seq[i]);
                        if(seq[i] < menor)
                        {
                                menor = seq[i];
                                posicao = i;
                        }
                }
        printf("Menor valor: %d\n", menor);
        printf("Posicao: %d\n", posicao);

return 0;
}


