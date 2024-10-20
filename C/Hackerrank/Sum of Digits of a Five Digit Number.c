#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    int i;
    int sum=0;
    
    do
    {
        int mod = n%10;
        sum = sum+mod;
        n = n/10;
    }while(n != 0);
    
    printf("%d", sum);
    return 0;
}
