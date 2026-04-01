#include<iostream>
using namespace std;
main()
{int n, i;
float x, y, s=1, fact=1, pot=1;
cout<<"Introducir el valor de X: ";
cin>>x;
cout<<"\nIntroducir el valor de N: ";
cin>>y;
while(y<1||y!=int(y))
{
cout<<"ERROR, vuelva a introducir N: ";
cin>>y;
}
n=int(y);
for(i=1;i<=n;i++)
{
fact=fact*i;
pot=pot*x;  
s=s+pot/fact;
}
cout<<"El resultado es: "<<s<<"\n";
system("pause");
return main();
}
