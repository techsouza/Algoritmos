#include <stdio.h>
 
int main() {
 
  int n[20], inverso[20], i, a;
        a = 19;
        for(i=0; i<20; i++)
                scanf("%d", &n[i]);
        for(i=0; i<20; i++)
        {
        inverso[a] = n[i];
        a--;
        }
        for(i=0; i<20; i++)
        printf("N[%d] = %d\n", i, inverso[i]);


    return 0;
}