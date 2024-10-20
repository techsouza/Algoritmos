#include<stdio.h>

int main(){

    double ir = 0, valor;
    scanf("%lf", &valor);

    if (valor > 4500)
    {
        ir += (valor - 4500) * 0.28;
        valor = 4500;

    }
    if (valor > 3000)
    {
        ir += (valor - 3000) * 0.18;
        valor = 3000;
    }
    if (valor > 2000)
    {
        ir += (valor - 2000) * 0.08;
    }
    if (ir == 0)
    {
        printf("Isento\n");
    }
    else
        printf("%.2lf", ir);


    return 0;

}