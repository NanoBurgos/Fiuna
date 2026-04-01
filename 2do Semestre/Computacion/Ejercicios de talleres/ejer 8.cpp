#include<iostream>
using namespace std;
main()
{
int x;
float z;
cout<<" introduzca un numero positivo y entero: " ;
cin>>z;
while(z<1||z!=int(z))
{
cout<<"ERROR, volver a ingresar el numero: ";
cin>>z;
}
x=int(z);
while(x!=1)
{
cout<<x<<"\t";
if(x%2==0)
x=x/2;
else
x=x*3+1;
}
cout<<x<<"\n";
system("pause");
return main();
}
