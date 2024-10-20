#include <stdio.h>

int main()
{

  int x, y, soma, aux;
  scanf("%d %d", &x, &y);
  soma = 0;
  if (x > y)
  {
    aux = x;
    x = y;
    y = aux;
  }
  while (x <= y)
  {
    if (x % 13 != 0.0)
    {
      soma = soma + x;
    }
    x++;
  }
  printf("%d\n", soma);

  return 0;
}