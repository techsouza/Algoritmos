#include <stdio.h>
 
int main() {
 
  double a, media;
  int cont;
        cont = 0;
        media = 0;

        while(cont < 2)
        {

                scanf("%lf", &a);
                if(a >= 0 && a <= 10)
                {
                        media = media + a;
                        cont++;
                }
                else
                        printf("nota invalida\n");

        }
        media = media / 2;
        printf("media = %.2lf\n", media);



    return 0;
}