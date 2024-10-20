#include<stdio.h>
int main()
{
  int cont=0, i;
  char numero[101];

	scanf("%s", numero);

	for(i=0; numero[i]!='\0'; i++)
	{
		
		if(numero[i] == 49)
			cont++;
	}


	if(cont%2==0)
	{
		numero[i] = '0';
		numero[i+1]= '\0';
	}
	if(cont%2 != 0)
	{
		numero[i] = '1';
		numero[i+1] = '\0';
	}
	printf("%s\n", numero);

return 0;
}