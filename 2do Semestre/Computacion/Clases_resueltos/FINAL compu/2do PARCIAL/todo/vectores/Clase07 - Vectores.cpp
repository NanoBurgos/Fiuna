#include<iostream>
using namespace std;
int valid();
main()
{
 int n;//primero se declara la variable que determina las componentes
 cout<<"Ingrese la cantidad de componentes, n= ";
 n=valid();//se ingresa un valor en la variable
 float v[n];//habiendo declarado n e ingresado un valor en dicha variable recién se declara el vector
 //procedemos a cargar las componentes del vector
 int i;
 cout<<"Ingrese las componentes del vector"<<endl;
 for(i=0;i<n;i++)
 {
  cout<<"v["<<i+1<<"]= ";
  cin>>v[i];
 }
 //ahora imprimimos el vector
 cout<<"El vector ingresado es: "<<endl;
 cout<<"v = [ "<<v[0];
 for(i=1;i<n;i++)
 {cout<<", "<<v[i];}
 cout<<"]"<<endl;
 system("pause");
}
int valid()
{
 float x;
 cin>>x;
 while(x!=int(x)||x<=0)
 {
  cout<<"Error. Ingrese un nro entero y positivo: ";
  cin>>x;
 }
 return int(x);
}
