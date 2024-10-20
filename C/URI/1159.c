#include <stdio.h>
 
int main() {
 
  int x, par, cont, aux;
        do{
                scanf("%d", &x);
                cont = 0;
                par = 0;
                aux = x;
                if(x == 0)
                  break;
                while(cont < 10)
                {
                        if(x%2 == 0)
                          par = par + x;
                        else
                          ;
                  cont++;
                  x++;
                }
        printf("%d\n", par);
        }while(aux != 0);

    return 0;
}