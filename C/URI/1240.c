#include <stdio.h>
 
int main() {
 
  int n, numero, a, b, x, y;
        scanf("%d", &n);
        for(; n>0; n--)
        {
                numero = 0;

                scanf("%d %d", &a, &b);
                while(b > 0)
                {
                        x = b % 10;
                        y = a % 10;
                        b = b / 10;
                        a = a / 10;
                        if(x != y)
                                numero++;
                }
          if(numero > 0)
                printf("nao encaixa\n");
          else
                printf("encaixa\n");

        }





    return 0;
}