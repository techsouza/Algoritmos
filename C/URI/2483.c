#include <stdio.h>

int main()
{
	int i, n, j = 9;
	char v[100000] = {'F', 'e', 'l', 'i', 'z', ' ', 'n', 'a', 't'};

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		v[j] = 'a';
		j++;
	}
	v[j] = 'l';
	v[j + 1] = '!';

	for (i = 0; i <= j + 1; i++)
		printf("%c", v[i]);

	printf("\n");
	return 0;
}