#include<iostream>
using namespace std;
main()
{
 //Cargar un vector
 int i,n;
 cout<<"Ingrese la longitud del vector: ";
 cin>>n;
 //Declaramos el vector
 float v[n];//La variable n debe ser necesariamente de tipo entero
 //En C++ las componentes del vector van de 0 hasta n-1
 for(i=0;i<=n-1;i++)
 {
  cout<<"v["<<i+1<<"]= ";
  cin>>v[i];
 }
 //Imprimir un vector
 cout<<"v=[ "<<v[0];//Imprimimos la primera componente antes del for
 for(i=1;i<=n-1;i++)
 {cout<<" "<<v[i];}
 cout<<" ]"<<endl;//al salir del for cerramos el corchete y agregamos un enter
 system("pause");
}
