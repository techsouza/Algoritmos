#include <stdio.h>

int main()
{

  int numero, contador;
  contador = 0;
  scanf("%d", &numero);
  while (contador < 6)
  {
    if (numero % 2 == 1)
    {
      printf("%d\n", numero);
      contador = contador + 1;
    }
    numero = numero + 1;
  }

  return 0;
}