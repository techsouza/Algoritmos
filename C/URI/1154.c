#include <stdio.h>
 
int main() {
 
   int contador, idade, soma;
  double media;
        soma = 0;
        contador = 0;
        do{
                scanf("%d", &idade);
                soma = soma + idade;
                contador= contador + 1;
        }while (idade > 0);
        media = (soma - idade) / (contador - 1.0);
        printf("%.2lf\n", media);




    return 0;
}