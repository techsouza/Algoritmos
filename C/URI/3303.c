#include <stdio.h>

int main()
{

    int i;
    char palavra[20] = {0};

    scanf("%s", palavra);

    for (i = 0; i < 19; i++)
    {
        if (palavra[i] == '\0')
        {
            if (i >= 10)
            {
                printf("palavrao\n");
                return 0;
            }
            else
            {
                printf("palavrinha\n");
                return 0;
            }
        }
    }
    
}