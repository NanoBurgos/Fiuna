#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int e;
float a,b,c,d,f;   
    cout<<"Ingrese 2 numeros enteros ";
    cin>> a;
    cin>> b;
    while (a!=int(a))
    {
    	cout<<"Ingrese A denuevo";
    	cin>>a;
    }
        while (b!=int(b))
    {
    	cout<<"Ingrese B denuevo";
    	cin>>b;
    }
    cout<<"\nIngrese 2 numeros decimales ";
    cin>> c;
    cin>> d;
    cout<<"\nA= "<<a<<"\t\tB= "<<b<<"\nC= "<<c<<"\t\tD= "<<d;
    e=a+int(c);
    f=float(b)*d;
    cout<<"\nE= "<<e<<"\t\tF= "<<f;
    system ("pause>null");
}
