#include<stdio.h>
#include<math.h>
int main()
{
  int n;
 unsigned long long int x, peso=1;

        scanf("%d", &n);
        for(; n>0; n--)
        {
                peso = 1;
                scanf("%llu", &x);
                if(x==64)
                {
                        peso=pow(2, 63)-1;
                        peso = peso / 6;
                        peso = peso /1000;
                }
                else
                {
                        peso=pow(2, x);
                        peso = peso/12;
                        peso = peso/1000;
                }

          if(peso <= 0)
                printf("0 kg\n");
          else if(peso > 0)
                printf("%llu kg\n", peso);

        }



return 0;
}

