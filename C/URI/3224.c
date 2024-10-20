#include<stdio.h>
int main(){

    char jon[1000], medico[1000];
    

    scanf("%s", jon);
    scanf("%s", medico);

    int a = strlen(jon);
    int b = strlen(medico);

    if(a >= b)
        printf("go\n");
    else
        printf("no\n");


    return 0;
}