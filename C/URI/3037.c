#include<stdio.h>

int main ()
{
	int casos, x, d, maria=0, joao=0;
	
	scanf("%d", &casos);
	
	for(casos; casos > 0; casos--)
	{
		scanf("%d %d", &x, &d);
		joao = (x*d) + joao;
		scanf("%d %d", &x, &d);
		joao = (x*d) + joao;
		scanf("%d %d", &x, &d);
		joao = (x*d) + joao;
		
		scanf("%d %d", &x, &d);
		maria = (x*d) + maria;
		scanf("%d %d", &x, &d);
		maria = (x*d) + maria;
		scanf("%d %d", &x, &d);
		maria = (x*d) + maria;	
		
		if(maria > joao)
			printf("MARIA\n");
		
		else
			printf("JOAO\n");
			
		joao =0;
		maria = 0;
			
	}
	
	
	return 0;
}
