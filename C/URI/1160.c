#include <stdio.h>
 
int main() {
 
  int  n, cont, pa, pb, aux;
  double g1, g2;
        scanf("%d", &n);
        while(n > 0)
        {
                cont =0;
                scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
                if(pa > pb){
                        printf("0 anos.\n");
                }
                if(pa <= pb)
                {
                        while(pa <= pb)
                        {
                                aux = pa * (g1/100);
                                pa = aux + pa;
                                aux = pb * (g2/100);
                                pb = aux + pb;
                                cont++;
                        }
                }
                if(cont <= 100 && cont >= 1)
                        printf("%d anos.\n", cont);
                if(cont > 100)
                        printf("Mais de 1 seculo.\n");
          n--;
        }


 
    return 0;
}