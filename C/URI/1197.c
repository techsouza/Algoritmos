#include<stdio.h>
int main()
{
  int v, t;


        while(scanf("%d %d", &v, &t) !=EOF)
        {
                t = t * (v+v);
                printf("%d\n", t);
        }

return 0;
}