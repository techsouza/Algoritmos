#include <stdio.h>
 
int main() {
 
int codigo_1, peca_1, codigo_2, peca_2;
        double valor_1, valor_2, valor_total;
        scanf("%d %d %lf", &codigo_1, &peca_1, &valor_1);
        scanf("%d %d %lf", &codigo_2, &peca_2, &valor_2);
        valor_total = 0;

        while (peca_1 > 0){
                valor_total = valor_total + valor_1;
                peca_1 = peca_1 - 1;
        }

        while (peca_2 > 0){
                valor_total = valor_total + valor_2;
                peca_2 = peca_2 - 1;
        }
        printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);

    return 0;
}