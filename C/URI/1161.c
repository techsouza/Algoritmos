#include<stdio.h>
int main()
{
  int m, n, i;
  long long int soma_n=1, soma_m=1;

        while(scanf("%d %d", &m, &n) != EOF)
        {
          i=m;
                while(m > 0)
                {
                        soma_m = soma_m * i;
                        i--;
                        m--;
                }
          i=n;
                while(n > 0)
                {
                        soma_n = soma_n * i;
                        i--;
                        n--;
                }
        soma_m = soma_m + soma_n;
        printf("%lld\n", soma_m);
        soma_n=1;
        soma_m=1;
        }


return 0;
}