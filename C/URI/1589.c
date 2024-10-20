#include <stdio.h>
 
int main() {
 
  int r, r1, r2, n;
        scanf("%d", &n);
        while(n > 0)
        {
                scanf("%d %d", &r1, &r2);
                r = r1 + r2;
                printf("%d\n", r);
        n--;
        } 

 
    return 0;
}