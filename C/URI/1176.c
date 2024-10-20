#include <stdio.h>
 
int main() {
 
 long long int n, ultimo, penultimo, soma, aux, caso;
        scanf("%lld", &caso);
        while(caso > 0)
        {
          scanf("%lld", &n);
                soma = 0;
                ultimo = 0;
                penultimo = 1;
                aux = n;
                while(n > 0)
                {
                        soma = ultimo  +  penultimo;
                        penultimo = ultimo;
                        ultimo = soma;    
 
                n--;
                }

                              printf("Fib(%lld) = %lld\n", aux, soma);


        caso--;
        }

 

    return 0;
}
