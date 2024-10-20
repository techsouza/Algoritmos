#include<stdio.h>
int main()
{
  int seq[501], maior, tam, i;
        while(scanf("%d", &tam) != EOF)
        {
                scanf("%d", &seq[0]);
                maior = seq[0];
                for(i=1; i<tam; i++)
                {
                        scanf("%d", &seq[i]);
                        if(seq[i] > maior)
                                maior = seq[i];
                }
        if(maior < 10)
                printf("1\n");
        else if(maior >= 10 && maior < 20)
                printf("2\n");
        else if(maior >=20)
                printf("3\n");
        }
return 0;
}

