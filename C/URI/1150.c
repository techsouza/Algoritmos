#include <stdio.h>
 
int main() {
 
  int x, z, cont, soma, aux;
        cont = 0;
        scanf("%d %d", &x, &z);
        if(x >= z)
        {
                while( x >= z)
                {
                        scanf("%d", &z);
                }
        }
        soma = x;
        aux = soma;
        if(x < z)
        {  

                while(soma < z)
                {
                        soma = soma + x;
                        cont++;
                        x++;
                }

        }
        if (aux > 0)
          cont++;
        else
          cont--;
        printf("%d\n", cont);

    return 0;
}