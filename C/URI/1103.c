#include <stdio.h>
 
int main() {
 
 int h1, m1, h2, m2, hora1, hora2, total;
        scanf("%d %d %d %d", &h1, &m1, & h2, &m2);
        while(h1!=0 || h2!=0 || m1!=0 || m2!=0)
        {
                hora1 = (h1 * 60) + m1;
                hora2 = (h2 * 60) + m2;
                if(hora1 < hora2)
                        total = hora2 - hora1;
                else 
                        total = ((60*24) - hora1) + hora2;
        printf("%d\n", total);
        scanf("%d %d %d %d", &h1, &m1, & h2, &m2);

        }

 
    return 0;
}