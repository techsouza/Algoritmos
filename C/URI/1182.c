#include<stdio.h>
int main()
{
  double soma=0.0;
  double m[12][12];
  int  i, j, c;
  char operacao;

        scanf("%d", &c);
        scanf(" %c", &operacao);
        for(i=0; i<12; i++)
        {
                for(j=0; j<12; j++)
                {
                        scanf("%lf", &m[i][j]);
                }
        }
        if(operacao == 'S')
        {
                for(j=c; j<=c; j++)
                {
                        for(i=0; i<12; i++)
                        {
                                soma = soma + m[i][j];
                        }
                }
        } 
        else{
                 for(j=c; j<=c; j++)
                {
                        for(i=0; i<12; i++)
                        {
                                soma = soma + m[i][j];
                        }
                soma = soma / 12.0;
                }
            }
        printf("%.1lf\n", soma);


return 0;
}
