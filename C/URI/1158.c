#include <stdio.h>
 
int main() {
 
  int n, impar, x, y, cont;
        scanf("%d", &n);
          while(n > 0)
          {
                scanf("%d %d", &x, &y);
                impar = 0;
                cont = 0;
                while(cont < y)
                {
                        if(x%2 == 1 || x%2 == -1)
                        {
                                impar = impar + x;
                                cont++;
                        }
                  x++;

                }
                printf("%d\n", impar);
        n--;

         }

    return 0;
}