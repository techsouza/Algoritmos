#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
    int a, b, sumi, difi;
    double c, d, sumd, difd;
    
    scanf("%d %d", &a, &b);

    scanf("%lf %lf", &c, &d);
    
    sumi = a + b;
    difi = a - b;
    
    sumd = c + d;
    difd = c - d;
    
    printf("%d %d\n", sumi, difi);
    printf("%0.1lf %0.1lf\n", sumd, difd);
        
    return 0;
}
