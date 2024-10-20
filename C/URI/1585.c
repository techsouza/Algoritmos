#include<stdio.h>
int losango(int b, int h)
{
  int result;

        result = (b*h)/2;
 return result;
}

int main()
{
  int n, x, y, result;

        scanf("%d", &n);
        for(; n>0; n--)
        {
                scanf("%d %d", &x, &y);
                result = losango(x, y); 
                printf("%d cm2\n", result);
        }
 
return 0;
}
