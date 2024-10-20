#include <stdio.h>
 
int main() {
 
 double a, b, c, r1, r2, delta;
        scanf("%lf %lf %lf", &a, &b, &c);
        delta = (b * b) - (4.0 * a * c);
        if (0 > delta || (2.0 * a) == 0.0)
        printf("Impossivel calcular\n");
        else{ 
        r1 = (-b + sqrt(delta)) / (2.0 * a);
        r2 = (-b - sqrt(delta)) / (2.0* a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
        }
    return 0;
}