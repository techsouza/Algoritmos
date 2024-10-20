#include <stdio.h>
 
int main() {
 
  int numero, x, y, b, r, c;
        scanf("%d", &numero);
        for(; numero>0; numero--)
        {
                scanf("%d %d", &x, &y);
                r = ((3*3)*(x*x)) + (y*y);
                b = 2*(x*x)+((5*5)*(y*y));
                c = -100*x+(y*y*y);
                if(r > b && r > c)
                        printf("Rafael ganhou\n");
                else if(b > r && b > c)
                        printf("Beto ganhou\n");
                else if(c > b && c > r)
                        printf("Carlos ganhou\n");

        }



    return 0;
}