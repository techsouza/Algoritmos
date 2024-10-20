#include <stdio.h>
 
int main() {
 
  int c, l, cont, contl;
        cont = 1;
        scanf("%d %d", &l, &c);
        while(cont <= c)
        {
          contl = 0;
                while(contl < (l - 1))
                {
                        printf("%d ", cont);
                        contl++;
                        cont++;
                }
          printf("%d", cont);
          cont++;
          printf("\n");
        }


 
    return 0;
}