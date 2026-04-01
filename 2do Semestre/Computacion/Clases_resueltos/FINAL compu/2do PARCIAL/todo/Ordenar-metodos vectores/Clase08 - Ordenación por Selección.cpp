#include<iostream>
using namespace std;
int valid();
main()
{
 int i,j,k,n,l; float aux;
 n=valid();
 float v[n];
 cout<<"Ordenacion por seleccion"<<endl;
 //Cargamos el vector
 for(i=0;i<n;i++)
 {
  cout<<"v["<<i+1<<"]= ";
  cin>>v[i];
 }
 //Ordenamos por seleccion
 for(i=0;i<n-1;i++)
 {
  k=i;
  for(j=i+1;j<n;j++)
  {
   if(v[k]>v[j])
    k=j;
  }
  aux=v[i];
  v[i]=v[k];
  v[k]=aux;
 }

 //Imprimimos el vector ordenado
 cout<<"v = [ "<<v[0];
 for(i=1;i<n;i++)
 {cout<<", "<<v[i];}
 cout<<" ]"<<endl;

 system("pause");
}
int valid()
{
 float x;
 do{cout<<"Ingrese un nro entero y positivo: ";
    cin>>x;}
 while(x!=int(x)||x<=0);
 return int(x);
}
