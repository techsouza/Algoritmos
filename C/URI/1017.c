#include <stdio.h>
 
int main() {
 
int tempo_gasto, vel_media;
        double litros;
        scanf("%d %d", &tempo_gasto, &vel_media);
        litros = (vel_media / 12.0) * tempo_gasto;
        printf("%.3lf\n", litros);

 
    return 0;
}