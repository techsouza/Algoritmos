#include <stdio.h>
 
int main() {
 
double km, litro;
        scanf("%lf %lf", &km, &litro);
        km = km / litro;
        printf("%.3lf km/l\n", km);

 
    return 0;
}