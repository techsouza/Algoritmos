#include <stdio.h>
 
int main() {
 
 char nome[255];
 double venda, salario;

        scanf("%s %lf %lf", nome, &salario, &venda);
        venda = venda * 0.15;
        salario = venda + salario;
        printf("TOTAL = R$ %.2lf\n", salario);

 
    return 0;
}