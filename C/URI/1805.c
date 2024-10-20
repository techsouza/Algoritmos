#include <stdio.h>

int main()
{
	unsigned long long int soma=0, a, b, i;

	scanf("%lld %lld", &a, &b);


	soma = (b-a)+1;
	soma = ((a + b)*soma)/2;
	printf("%lld\n", soma);
	return 0;
}