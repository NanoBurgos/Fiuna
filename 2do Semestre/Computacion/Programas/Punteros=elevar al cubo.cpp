#include<iostream>
using namespace std;
int cubeByReference(int *);

main()
{
int a=5;
cout<<"El valor de la variable 'a' es "<<a<<"\n\n";

cout<<"El valor de la variable a al cubo es "<<cubeByReference(&a)<<endl;

system("pause");
}

int cubeByReference(int *nPtr)
{
*nPtr= *nPtr * *nPtr * *nPtr;                   
}
