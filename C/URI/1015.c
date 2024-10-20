#include <stdio.h>
 
int main() {
 
 double x1, x2, y1, y2, ponto;
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
        ponto = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
        printf("%.4lf\n", sqrt(ponto));

    return 0;
}