#include <stdio.h>
 
int main() {
 
  double s, a, b;
        s= 1.0;
        a = 3.0;
        b = 2.0;
        for(; a<=39; a = a+2)
        {
                s = s + a/b;
                b = b*2;
        }
        printf("%.2lf\n", s);



 

    return 0;
}