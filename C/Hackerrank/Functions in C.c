#include<stdio.h>


int max(int a, int b, int c, int d)
{
    if(a > b && a > c && a > d)
        return a;
    if(b > a && b > c && b > d)
        return b;
    if(c > b && c > a && c > d)
        return c;
    else
        return d;
}


int main()
{
    int a, b, c, d;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    int resultado = max(a, b, c, d);
    
    printf("%d", resultado);
    
    return 0;
}

