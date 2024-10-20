#include<stdio.h>
int main()
{
  int v[200], i, n, menor, j;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &v[i]);
	}
	menor = v[0];
	j = 1;
	for(i=1; i<n; i++)
	{
		if(menor > v[i])
		{
			menor = v[i];
			j = i+1;
		}
	}
	printf("%d\n", j);
return 0;
}