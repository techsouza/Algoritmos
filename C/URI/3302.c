#include<stdio.h>
int main(){

    int caso, i, problema;

    scanf("%d", &caso);

    for(i=1; i<=caso; i++)
    {
        scanf("%d", &problema);
        printf("resposta %d: %d\n", i, problema);
    }


    return 0;
}