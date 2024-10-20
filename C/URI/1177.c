#include <stdio.h>
 
int main() {
 
  int n[1000], i, t, x;
        scanf("%d", &t);
        x = t;
        t = 0;
        for(i=0; i<1000; i++)
        {
                n[i] = t++;
                if(x == t)
                {
                        t = 0;
                }
                printf("N[%d] = %d\n", i, n[i]);


        }

    return 0;
}