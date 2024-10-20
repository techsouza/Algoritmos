#include<stdio.h>
int main()
{
  int j, i;
  double m[12][12], total=0.0;
  char tipo;

        scanf(" %c", &tipo);

        for(i=0; i<12; i++)
        {
                for(j=0; j<12; j++)
                {
                        scanf("%lf", &m[i][j]);
                }
        }
        i=11;
        j=10;
        while(i>0)
        {
                while(j>=0)
                {
                        total = total + m[i][j];
                        j--;
                        
                }
          i--;
          j = i-1;
        }
        if(tipo == 'M')
                total = total/66.0;

        printf("%.1lf\n", total);
return 0;
}

