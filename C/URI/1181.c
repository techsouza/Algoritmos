#include<stdio.h>
int main()
{
  int l, j, i;
  float M[12][12]={{0.0}};
  float total=0;
  char tipo;
        scanf("%d", &l);
        scanf("%*c%c", &tipo);
        for(i=0; i<12; i++)
        {
                for(j=0; j<12; j++)
                {
                        scanf("%f", &M[i][j]);
                }
        }
        for(i=l; i==l; i++)
        {
                for(j=0; j<12; j++)
                {
                        total = total+M[i][j];
                }
        }
        if(tipo=='M')
                total=total/12.0;

        printf("%.1f\n", total);

return 0;
}


