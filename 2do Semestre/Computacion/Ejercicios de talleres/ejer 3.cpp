#include<iostream>
using namespace std;
main()
{
int n;
float x;
cout<<" introducir un numero con un numero par de digitos: ";
cin>>x;
while(x!=int(x))
{
cout<<"Introducir de nuevo, tiene que ser un valor entero: ";
cin>>x;
}
n=int(x);
for(
