#include<iostream>
using namespace std;
int valid();
main()
{
 int i,j,k,n,l; float aux;
 n=valid();
 float v[n];
 cout<<"Ordenacion por insercion"<<endl;
 //Cargamos el vector
 for(i=0;i<n;i++)
 {
  cout<<"v["<<i+1<<"]= ";
  cin>>v[i];
 }
 //Ordenamos por insercion
 for(i=1;i<n;i++)
 {
  aux=v[i];
  for(j=i-1;j>=0;j--)
  {
   if(v[j]>aux)
    v[j+1]=v[j];
   else
    break;
  }
  v[j+1]=aux;
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
