#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    char *number[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int i;
    for(i=a; i<=b; i++)
    {
        if(i<=9)
        {
            printf("%s\n", number[i-1]);
        }
        else
        {
            printf ("%s\n", number[9+(i%2)]);
        }    
    }
    
    return 0;

}
