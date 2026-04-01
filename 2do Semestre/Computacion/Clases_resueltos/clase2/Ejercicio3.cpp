#include<iostream>
#define PI 3.14
using namespace std;
float r ;
float A, P;
main(){
     cout<<"Ingrese la radio del circulo";
     cin>> r;
     A = PI*r*r;
     P= 2*PI*r;
     cout<<"El Area del circulo es:";
     cout<<A<<endl;
     cout<<"El Perimetro del circulo es:";
     cout<<P<<endl;
     system("pause");
}     
