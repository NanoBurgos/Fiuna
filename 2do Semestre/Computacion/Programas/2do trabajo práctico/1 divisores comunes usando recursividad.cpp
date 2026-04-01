#include<iostream>
#include<math.h>
using namespace std;
int entpos ();
int MCD(int x, int y);
main()
{
int a, b, mcd, i, k=0;
a=entpos(); b=entpos();
cout<<"\nLos numeros ingresados son: "<<a<<" y "<<b<<endl;
cout<<"\nEl MCD de ambos numeros es: "<<MCD(a,b)<<endl;

//Para los Divisores
mcd=MCD(a,b);
cout<<"Todos los divisores comunes son: ";
for(i=1;i<=mcd;i++)
{if(mcd%i==0) 
cout<<i<<" ";}
cout<<endl;

system("pause");
}

int entpos()
{
int q;
do{cout<<"Digite un numero entero y positivo: ";cin>>q;}
while(q!=int(q)||q<=0);
return int(q);
}

int MCD(int x, int y)
{
if(y==0)
return x;
else
return MCD(y, x%y);
}
