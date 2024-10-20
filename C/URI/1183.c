#include<stdio.h>
int main()
{
  int i, j;
  char tipo;
  double m[12][12], total=0.0;

        scanf(" %c", &tipo);

        for(i=0; i<12; i++)
        {
                for(j=0; j<12; j++)
                {
                        scanf("%lf", &m[i][j]);
                }
        }

        i=0;
        j=1;
        while(i<11)
        {
                while(j<12)
                {
                        total = total + m[i][j];
                        j++;
                }
          i++;
          j = i+1;
        }

        if(tipo == 'M')
                total = total/66.0;

        printf("%.1lf\n", total);



return 0;
}

