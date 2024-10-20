#include <stdio.h>
 
int main() {
 
 int cont_j, cont_i; 
        cont_j = 60; 
        cont_i = 1; 
        while(cont_j >= 0)
        {   
          printf("I=%d J=%d\n", cont_i, cont_j);
          cont_i = cont_i + 3;
          cont_j = cont_j - 5;
        }

 
    return 0;
}