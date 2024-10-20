#include <stdio.h>

int main()
{
    
   long long int i, num[1000], numero, cont=0;
	scanf("%lld", &numero);
	i=0;
	while(numero>0)
	{
		num[i] = numero%10;
		numero = numero/10;
		i++;
		cont++;
	}
	for(i=0; i<cont; i++)
		printf("%lld", num[i]);
	printf("\n");
  return 0;
}