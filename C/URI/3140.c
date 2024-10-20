#include<stdio.h>

int main()
{
	char html[1000];

    while(fgets(html, sizeof(html), stdin)!= EOF)
    {
        if(strcmp(html, "<body>"))
            {
                scanf(" %[^\n]", html);
                while(html != "</body")
                {
                    printf("TESTEEEEEEE - %s", html);
                    scanf(" %[^\n]", html);
                }

            }
    }
    return 0;
	
}
