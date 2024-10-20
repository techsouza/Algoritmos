#include <stdio.h>
 
int main() {
 
  double a, b, c, aux;
	scanf("%lf %lf %lf", &a, &b, &c);
	  if(a <= b && b <= c)
	    {
		aux = c;
		c = a;
		a = aux;
	    }
	  else if(a <= c && c <= b)
	  {
		aux = b;
		b = c;
		c = a;
	 	a = aux;
	  }
	  else if(b <= c && c <= a)
	  {
		aux = c;
		c = b;
		b = aux;
	  }
	  else if(c <= a && a <= b)
	  {
		aux = b;
		b = a;
		a = aux;
	  }
	  else if(b <= a && a <= c)
	  {
		aux = c;
		c = b;
		b = a;
		a = aux;
	  }
	if(a >= (b + c))
	  printf("NAO FORMA TRIANGULO\n");
	else if((a * a) == ((b * b)+(c * c)))
	  printf("TRIANGULO RETANGULO\n");
	else if((a * a) > ((b * b)+(c * c)))
	  printf("TRIANGULO OBTUSANGULO\n");
	else if((a * a) < ((b * b)+(c * c)))
	  printf("TRIANGULO ACUTANGULO\n");
	 if(a == b && a == c)
	  printf("TRIANGULO EQUILATERO\n");
	 if(a == b && b != c || c != a && c == b)
	  printf("TRIANGULO ISOSCELES\n");


    return 0;
}