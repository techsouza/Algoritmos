#include <stdio.h>  
 int main() {
  
    int var, i=0, j = 1;
    for (var = 0; var < 11; ++var) {
      if ((i / 10.0) == 1 || (i / 10.0) == 2 || (i / 10.0) == 0) {
          printf("I=%.0f J=%.0f\n", (i / 10.0), ((i / 10.0) + j));
          printf("I=%.0f J=%.0f\n", (i / 10.0), ((i / 10.0) + j + 1));
          printf("I=%.0f J=%.0f\n", (i / 10.0), ((i / 10.0) + j + 2));
       } else {
          printf("I=%.1f J=%.1f\n", i / 10.0, (i / 10.0) + j);
          printf("I=%.1f J=%.1f\n", i / 10.0, (i / 10.0) + j + 1);
          printf("I=%.1f J=%.1f\n", i / 10.0, (i / 10.0) + j + 2);
       }
       i += 2;
    }
  
     return 0;
 }