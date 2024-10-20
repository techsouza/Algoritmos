#include <stdio.h>
 
int main() {
  int x, y, n;
  double result;
        scanf("%d", &n);
        while(n > 0)
        {
                scanf("%d %d", &x, &y);
                if(y == 0)
                        printf("divisao impossivel\n");
                else{
                        result = x / (1.0 * y);
                        printf("%.1lf\n", result);
                }
          n--;

        }


    return 0;
}