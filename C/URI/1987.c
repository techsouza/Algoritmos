#include<stdio.h>
int main()
{
  long long int n, m, mod, soma, sim = 1;

  while(scanf("%lld %lld", &n, &m) != EOF)
	{
		soma = 0;
		sim = 1;
		while(m > 0)
		{
			mod = m % 10;
			soma = soma + mod;
			m = m / 10;
		}
	
		if(soma % 3 != 0)
			sim = 0;
	if(sim)
		printf("%lld sim\n", soma);
	else
		printf("%lld nao\n", soma);
	}


  return 0;
}