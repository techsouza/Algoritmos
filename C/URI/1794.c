#include<stdio.h>


int main()
{
    int roupa, la, lb, sa, sb;

    scanf("%d", &roupa);
    scanf("%d %d", &la, &lb);
    scanf("%d %d", &sa, &sb);


    if(roupa < la || roupa < sa)
    {
        printf("impossivel\n");
    }
    else if(roupa > lb || roupa > sb)
    {
        printf("impossivel\n");
    }
    else
        printf("possivel\n");


    return 0;
}


