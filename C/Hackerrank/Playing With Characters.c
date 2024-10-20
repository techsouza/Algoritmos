#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char s[256];
    scanf("%[^\n]%*c", &s);
    printf(s);
    printf("\n");
    fflush(stdin);

    scanf("%[^\n]%*c", &s);
    printf(s);
    printf("\n");
    fflush(stdin);
      
    scanf("%[^\n]%*c", &s);
    printf(s);
    printf("\n");
    fflush(stdin);
            
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
