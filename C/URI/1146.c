#include <stdio.h>
 
int main() {
  int n, crescente;
        scanf("%d", &n);
        while(n != 0)
        {
          crescente = 1;
                while(crescente < n)
                {
                        printf("%d ", crescente);
                        crescente++;
                }
                printf("%d\n", crescente);
                scanf("%d", &n);
        }


    return 0;
}