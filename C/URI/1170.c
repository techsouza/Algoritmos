#include <stdio.h>
 
int main() {
  double comida;
  int dias, n;
        scanf("%d", &n);
        for(; n>0; n--)
        {
                scanf("%lf", &comida);
                dias = 0;
                while(comida > 1.0)
                {
                        comida = comida * 0.5;
                        dias++;
                }
        printf("%d dias\n", dias);
        }

    return 0;
}