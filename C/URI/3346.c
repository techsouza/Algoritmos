#include<stdio.h>
int main ()
{

    double a, b;

    scanf("%lf %lf", &a, &b);
    a = ((((1.0 + a/100.00) * (1.0 + b/100.00)) - 1.0) * 100.0);

    printf("%.6lf\n", a);

}