#include<stdio.h>

int main()
{
    char v[34]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    int i=0, a=0;

    scanf("%d", &i);
    a =i;
    for(i=0; i<a; i++)
        printf("%c", v[i]);
    printf("\n");

    return 0;
}
