#include <stdio.h>

int main()
{
	unsigned long long int a, b;

	scanf("%lld %lld", &a, &b);

	a = a*b;

	printf("%lld\n", a);

	return 0;
}