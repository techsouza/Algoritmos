#include<stdio.h>
int main(){

    int h, l, z;

    scanf("%d %d %d", &h, &z, &l);

    if(z > l && z < h || z < l && z > h)
        printf("zezinho\n");
    else if(l > z && l < h || l < z && l > h)
        printf("luisinho\n");
    else   
        printf("huguinho\n");
    

    return 0;
}