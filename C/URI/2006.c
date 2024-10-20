#include<stdio.h>
int main()
{
  int cha, v[10], i, cont=0;
	scanf("%d", &cha);

	for(i=0; i<5; i++)
		scanf("%d", &v[i]);

	for(i=0; i<5; i++)
	{
		if(v[i] == cha)
			cont++;
	}
	printf("%d\n", cont);

return 0;
}