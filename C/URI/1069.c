#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

// Esta função devolve 1 se a string s contém uma
// sequência bem-formada de parênteses e colchetes
// e devolve 0 se a sequência é malformada.

void bemFormada (char s[]) {
	char *p;
	int n, i, t, total =0;
	n = strlen(s);
	p = malloc(n * sizeof (char));
	t=0;

	for(i=0; s[i] != '\0'; i++)
	{
		if(s[i]=='<' || s[i]=='>')
		{
			switch (s[i])
			{
				case '>':
					if(t != 0 && p[t-1] == '<') 
					{
						--t;
						total++;
					}

					break;

				/*case '}':
					if(t != 0 && p[t-1] == '{')
						--t;
					else
						return 0;
					break;*/
				default: p[t++] = s[i];		

			}
		}
		else
			;
	}
	free (p);
	printf("%d\n", total);

}


int main()
{
	int i, caso;
	char x[1000];;
	scanf("%d", &caso);
	for(; caso>0; caso--)
	{
		
		scanf(" %s", x);		
		bemFormada(x);


	}
	return 0;
}