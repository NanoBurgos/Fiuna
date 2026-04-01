#include<iostream>
using namespace std;
main()
{
int n, i;
float x, s=2, fact=1;
cout<<" introduzca un numero n positivo y entero: " ;
cin>>x;
while(x<1||x!=int(x))
{
cout<<"ERROR, volver a ingresar el numero: ";
cin>>x;
}
n=int(x);
for(i=1;i<=n;i++)
{
fact=fact*i;
s=s+1.0/fact;
}
cout<<"El valor de la suma es "<<s<<" con el numero "<<n<<"\n";
system("pause");
return main();
}
