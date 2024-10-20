#include <stdio.h>
 
int main() {
 
int x, y, z, x1, y1, z1, troca;
        scanf("%d %d %d", &x, &y, &z);
        x1 = x;
        y1 = y;
        z1 = z;
        if (z < x && x < y)
        {
          troca = y;
          y = x;
          x = z;
          z = troca;
        }
        else if (y < z && z < x)
        {
          troca = x;
          x = y;
          y = z;
          z = troca;
        }
        else if (x < z && z < y)
        {
          troca = y;
          y = z;
          z = troca;
        }
        else if (z < y && y < x)
        {
          troca = x;
          x = z;
          z = troca;
        } 
        else if (y < x && x < z)
        {
          troca = x;
          x = y;
          y = troca;
        }
        printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n", x, y, z, x1, y1, z1);

 
    return 0;
}