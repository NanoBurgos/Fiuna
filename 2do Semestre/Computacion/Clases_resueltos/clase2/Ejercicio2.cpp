#include<iostream>
using namespace std;
float a, b, c;
float A, P;
main(){
       cout<<"Ingrese los lados del triangulo\n";
       cin>> a;
       cin>> b;
       cin>> c;
       A= (b*a)/2;
       P= (a*b*c)/2;
       cout<<"El area del Triangulo es:";
       cout<<A<<endl;
       cout<<"El Perimetro del Triangulo es:";
       cout<<P<<endl;
       system("pause");
}       
