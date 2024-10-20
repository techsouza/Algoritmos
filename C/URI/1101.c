#include <stdio.h>
 
int main() {
 
  int a, b, soma, aux;
        do{
        scanf("%d %d", &a, &b);
          soma = 0;
        if(a <= 0 || b <= 0)
                break;
        else if(a > b)
        {
                aux = a;
                a = b;
                b = aux;
        }

        while(b >= a)
        {
                soma = soma + a;
                printf("%d ", a);
                a++;
                if(a > b)
                        printf("Sum=%d\n", soma);
        }
        }       while(a !=0 || b !=0);



    return 0;
}