#include <stdio.h>
 
int main() {
 
int valor, valor1, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1;
        scanf("%d", &valor);
        valor1 = valor;
        nota_100 = 0;
        nota_50 = 0;
        nota_20 = 0;
        nota_10 = 0;
        nota_5 = 0;
        nota_2 = 0;
        nota_1 = 0;
        if (valor >= 100)
        {
          nota_100 = valor / 100;
          valor = valor % 100;
        }
        if (valor >= 50 && valor<= 99)
        {
          nota_50 = valor / 50;
          valor = valor % 50;
        }
        if (valor >= 20 && valor <= 49)
        {
          nota_20 = valor / 20;
          valor = valor % 20;
        }
        if (valor >= 10 && valor <= 19)
        {
          nota_10 = valor / 10;
          valor = valor % 10;
        }
        if (valor >= 5 && valor <= 9)
        {
          nota_5 = valor / 5;
          valor = valor % 5;
        }
        if (valor >= 2 && valor <= 4)
        {
          nota_2 = valor / 2;
          valor = valor % 2;
        }
        nota_1 = valor;
        printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", valor1, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1);
    return 0;
}