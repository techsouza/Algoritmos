medidas = input().split(" ");

a, b, c = medidas;

triangulo = float(a)*float(c)/2.0;
circulo = 3.14159*float(c)*float(c);
trapezio = (float(c)*(float(a)+float(b)))/2;
quadrado = float(b)*float(b);
retangulo = float(a)*float(b);

print("TRIANGULO: %0.3f" %triangulo);
print("CIRCULO: %0.3f" %circulo);
print("TRAPEZIO: %0.3f" %trapezio);
print("QUADRADO: %0.3f" %quadrado);
print("RETANGULO: %0.3f" %retangulo);