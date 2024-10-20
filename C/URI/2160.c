#include <stdio.h>

int main()
{
	int i, cont=0;
	char nome[501];

	scanf("%[^\n]", nome);

	for(i=0; nome[i]!='\0'; i++)
		cont++;

	if(cont > 80)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;
}