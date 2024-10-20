#include<stdio.h>
int main()
{
  int n, v[100000], mary=0, john=0, i;


	scanf("%d", &n);
	while(n != 0)
	{
		
		for(i=0; i<n; i++)
			scanf("%d", &v[i]);
		for(i=0; i<n; i++)
		{
			if(v[i] == 0)
				mary++;
			else if(v[i] == 1)
				john++;
		}

		printf("Mary won %d times and John won %d times\n", mary, john);
	scanf("%d", &n);

	mary=0;
	john=0;
	}
	
  return 0;
}