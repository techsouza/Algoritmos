#include <stdio.h>
 
int main() {
  int i;
  double s;
        s = 1;
        for(i=2; i<=100; i++)
        {
                s = s + 1.0/i;
        }
        printf("%.2lf\n", s);



    return 0;
}