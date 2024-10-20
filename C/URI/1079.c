#include <stdio.h>
 
int main() {
 
 double a, b, c, media;
  int n;
        scanf("%d", &n);
        while(n > 0)
        {
                scanf("%lf %lf %lf", &a, &b, &c);
                media = ((a * 2) + (b * 3) + (c * 5))/10;
                printf("%.1lf\n", media);
        n = n - 1;


        }

    return 0;
}