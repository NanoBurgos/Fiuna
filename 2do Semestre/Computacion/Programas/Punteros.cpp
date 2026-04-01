#include<iostream>
using namespace std;
main()
{
int a,*aPtr;

a=10;
aPtr=&a;
cout<<"\nLa direccion de la variable 'a' es "<<&a<<"\n";
cout<<"El valor de la variable 'a' es "<<a<<"\n\n";

cout<<"El valor de aPtr es "<<aPtr<<"\n\n";

cout<<"La direccion de la variable *aPtr es "<<&aPtr;
cout<<"\nEl valor de *aPtr es "<<*aPtr<<"\n";

cout<<"\nPara probar que * y & son complementarios\n";
cout<<"*&aPtr= "<<*&aPtr<<endl;
cout<<"&*aPtr= "<<&*aPtr<<endl;

system("pause");
}
