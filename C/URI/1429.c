#include <stdio.h>
 
int main() {
 
  int numero, mod, i, fatorial, result, aux;
        do{
                scanf("%d", &numero);
                aux = numero;
                result = 0;
                fatorial = 1;
                i = 2;
                if(numero == 0)
                        break;
                while(numero > 0)
                {
                        mod = numero % 10;
                        numero = numero / 10;
                        result = result + mod * fatorial;
                        fatorial = fatorial * i;
                        i++;
                }

        printf("%d\n", result);

        }while(aux != 0);




    return 0;
}