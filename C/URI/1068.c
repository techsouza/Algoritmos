#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

// Esta função devolve 1 se a string s contém uma
// sequência bem-formada de parênteses e colchetes
// e devolve 0 se a sequência é malformada.

int bemFormada (char s[]) {
	char *p;
	int n, i, t;
	n = strlen(s);
	p = malloc(n * sizeof (char));
	t=0;

	for(i=0; s[i] != '\0'; i++)
	{
		if(s[i]==')' || s[i]=='(')
		{
			switch (s[i])
			{
				case ')':
					if(t != 0 && p[t-1] == '(') 
						--t;
					else
						return 0;
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
	return t==0;
}


int main()
{
	int i, caso, t;
	char x[1000];;
	while(scanf("%d", &caso) != EOF)
	{
		scanf(" %s", x);		
		t = bemFormada(x);

		if(t == 1)
			printf("correct\n");
		else
			printf("incorrect\n");
	}
	return 0;
}