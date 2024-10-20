#include <stdio.h>
 
int main() {
 
  int x, y, impar;
        scanf("%d %d", &x, &y);
        if(x > y)
        {
                impar = x;
                x = y;
                y = impar;
        }
        impar = 0;
        x = x + 1;
        while(x < y)
        {
                if(x%2 == 1 || x%2 == -1)
                        impar = impar + x;
                x++;
        }
        printf("%d\n", impar);



    return 0;
}