#include <stdio.h>
 
int main() {
 
int num, horas_trab;
  double valor_hora, total;
    scanf("%d %d %lf", &num, &horas_trab, &valor_hora);
    total = valor_hora * horas_trab;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", total);
 
    return 0;
}