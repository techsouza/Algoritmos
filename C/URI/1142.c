#include <stdio.h>
 
int main() {
  int n, i;
        scanf("%d", &n);
        i = 1;
        while(n > 0)
        {
                printf("%d %d %d PUM\n", i, i+1, i+2);
                i = i + 4;
        n--;
        }


    return 0;
}