#include<iostream>

using namespace std;

int main(){


   double a, b, c;

    cin >> a >> b >> c;

    if(a>=(b+c) || b >= a+c || c >= b+a)
        cout << "NAO FORMA TRIANGULO\n";
    else if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a)
        cout << "TRIANGULO RETANGULO\n";
    else if(a * a > b*b+ c*c || b*b > a*a+c*c || c*c > b*b+a*a)
        cout << "TRIANGULO OBTUSANGULO\n";
    else if(a*a<b*b + c*c || b*b < a*a+c*c || c*c < b*b+a*a)
        cout << "TRIANGULO ACUTANGULO\n";
    if(a == b && b == c)
       cout << "TRIANGULO EQUILATERO\n";
    if(a==b && b!=c || c != a && c == b || c == a && b != a)
       cout << "TRIANGULO ISOSCELES\n";

}