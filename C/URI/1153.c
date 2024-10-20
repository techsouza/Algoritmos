#include <stdio.h>
 
int main() {
 
int fat, n;
        fat = 1;    
        scanf("%d", &n);
        while(n > 0)
        {
          fat = fat * n;
          n = n - 1; 
        }
        printf("%d\n", fat);

 
    return 0;
}