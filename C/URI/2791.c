#include<stdio.h>

int main()
{
	int feijao, copo_1, copo_2, copo_3, copo_4;

	scanf("%d %d %d %d", &copo_1, &copo_2, &copo_3, &copo_4);
	feijao = 1;
	if(feijao == copo_1)
	{
		printf("1\n");
		return 0;
	}
	if(feijao == copo_2)
	{
		printf("2\n");
		return 0;
	}
	if(feijao == copo_3)
	{
		printf("3\n");
		return 0;
	}
	if(feijao == copo_4)
	{
		printf("4\n");
		return 0;
	}


}