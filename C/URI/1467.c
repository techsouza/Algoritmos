#include<stdio.h>

int main()
{
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {

        if(a == b && a == c & b == c )
        {
            printf("*\n");
        }
        if(a != b && a == c & b != c )
        {
            printf("B\n");
        }
        if(a != b && a != c & b == c )
        {
            printf("A\n");
        }
        if(a == b && a != c & b != c )
        {
            printf("C\n");
        }
    }
    return 0;

}
