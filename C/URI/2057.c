#include<stdio.h>
int main()
{
  int s, t, f, result;
        scanf("%d %d %d", &s, &t, &f);
        result = (s + t) + f;
        if(result < 0)
                result = 24 + result;
        if(result > 24)
        {
                result = result - 24; 

        }
        if(result == 24)
                result = 0;
        printf("%d\n", result);
return 0;
}

