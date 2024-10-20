#include <stdio.h>

int main()

{
	int cf, cb, cm;
	int uf, ub, um;
	int result;

	scanf("%d %d %d", &cf, &cb, &cm);
	scanf("%d %d %d", &uf, &ub, &um);

	uf = cf - uf;
	if(uf >= 0)
		uf =0;
	ub = cb - ub;
	if(ub >= 0)
		ub =0;
	um = cm - um;
	if(um >= 0)
		um =0;
	result = uf + ub + um;
	result = result *(-1);
	printf("%d\n", result);

	return 0;

}