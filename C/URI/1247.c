#include <stdio.h>
#include <math.h>

int main()
{
 int d, vf, vg, x, y;
 double z, w;
        while(scanf("%d %d %d", &d, &vf, &vg) != EOF)
        {
                z = sqrt((d * d) + (144));
        w = 12.0 / vf;
        z= z / vg;
        if(w >= z)
                printf("S\n");
        else
                printf("N\n");

        }

return 0;
}

