#include<iostream>
#include<math.h>
using namespace std;

float hipotenusa (int , int);
float hipotenusa1( float , float);
main(){
       int a, b;
       float c, d, h, h1;
       cout<<"Ingrese el primer lado del primer triangulo: ";
       cin>>a;
       cout<<"ingrese el segundo lado del primer triangulo: ";
       cin>>b;
       h  = hipotenusa(a,b);
       cout<<"La hipotenusa del primer triangulo es: "<<h; 
       cout<<"\n\nIngrese el primer lado del segundo triangulo: ";
       cin>>c;
       cout<<"ingrese el segundo lado del segundo triangulo: ";
       cin>>d;
       h1  = hipotenusa1(c,d);
       cout<<"La hipotenusa del Segundo triangulo es: "<<h1<<"\n";
       system("pause");   
   
}
float hipotenusa( int a, int b){
    float d;
    d = sqrt(a*a + b*b);
    return d;
}
float hipotenusa1( float c, float d){
    float e;
    e = sqrt(c*c + d*d);
    return e;
}       
