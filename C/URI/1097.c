#include <stdio.h>
 
int main() {
 
 int i, j, cont_j;
        cont_j = 0;
        i = -1;
        j = 2;
        while( i < 9)
        {
                i = i + 2;
                j = j + 5;
                cont_j = 0;
                while (cont_j < 3)
                {
                        printf("I=%d J=%d\n", i, j);
                        cont_j++;
                        j = j - 1;
                }

        }

 
    return 0;
}