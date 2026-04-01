#include<iostream>
using namespace std;
int valid();
main()
{
 int i,j,n;
 //Validamos la longitud del vector
 cout<<"Ingrese la longitud del vector, n= "; 
 n=valid();
 //Una vez que tenemos la longitud declaramos el vector
 float v[n],aux;
 //Ingresamos las componentes
 cout<<"Ingrese las componentes del vector"<<endl;
 for(i=0;i<n;i++)
 {
  cout<<"v["<<i+1<<"]= ";
  cin>>v[i];
 }
 //Imprimimos el vector
 cout<<"El vector ingresado es: "<<endl;
 cout<<"v = [ "<<v[0];
 for(i=1;i<n;i++)
 {cout<<", "<<v[i];}
 cout<<"]"<<endl;
 //Ordenamos por el método de burbuja
 do{
    j=1; //el 1 interpretamos como ordenado (no hay intercambios)
    for(i=0;i<n-1;i++)
    {
     if(v[i]>v[i+1])//comparamos componentes vecinas
     {
      aux=v[i]; v[i]=v[i+1]; v[i+1]=aux; //intercambiamos componentes
      j=0; //el 0 interpretamos como desordenado (hay intercambios)
     }
    }
   }
 while(j==0);//se repite si se intercambiaron componentes
 //Imprimimos el vector ordenado
 cout<<"El vector ordenado es: "<<endl;
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
