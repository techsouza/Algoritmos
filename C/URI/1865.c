#include<stdio.h>
#include<string.h>
int main()
{
  int n, caso;
  char nome[256], thor[256];
	strcpy(thor, "Thor");

	scanf("%d", &caso);
	for(;caso>0; caso--)
	{
		scanf(" %s", nome);
		scanf("%d", &n);
		if(strcmp(nome, thor) == 0)
			printf("Y\n");
		else
			printf("N\n");
	}

 return 0;
}