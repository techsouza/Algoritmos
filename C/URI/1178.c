#include <stdio.h>
 
int main() {
 
  int i;
  double n[100], x;
        scanf("%lf", &x);
        n[0] = x;
        for(i=0; i<100; i++)
        {
                printf("N[%d] = %.4lf\n", i, n[i]);
                n[i+1] = n[i]/2;
        }





    return 0;
}