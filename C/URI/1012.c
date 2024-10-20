#include <stdio.h>
 
int main() {
double a, b, c, tri_ret, circulo, trapezio, quadrado, retangulo;
        scanf("%lf %lf %lf", &a, &b, &c);

        tri_ret = (a * c)/2;
        circulo = 3.14159 * (c * c);
        trapezio = (c * (a + b)) / 2;
        quadrado = b * b;
        retangulo = a * b;

        printf("TRIANGULO: %.3lf\n", tri_ret);
        printf("CIRCULO: %.3lf\n", circulo);
        printf("TRAPEZIO: %.3lf\n", trapezio);
        printf("QUADRADO: %.3lf\n", quadrado);
        printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}