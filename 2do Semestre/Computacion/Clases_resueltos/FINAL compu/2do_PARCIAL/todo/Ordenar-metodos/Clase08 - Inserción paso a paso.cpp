#include<iostream>
using namespace std;
int valid();
main()
{
 int i,j,k,n,c; float aux;
 n=valid();
 float v[n];
 //Cargamos el vector
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
 cout<<" ]"<<endl<<endl;
 //Ordenamos por insercion
 cout<<"Ordenacion por insercion"<<endl;
 int p=0;
 for(i=1;i<n;i++)
 {
  p++;
  cout<<"Paso "<<p<<endl;
  aux=v[i];
  for(j=i-1;j>=0;j--)
  {
   if(v[j]>aux)
    v[j+1]=v[j];
   else
    break;
  }
  v[j+1]=aux;
 cout<<"v = [ "<<v[0];
 for(c=1;c<n;c++)
 {cout<<", "<<v[c];}
 cout<<" ]"<<endl;
 }
 
 //Imprimimos el vector ordenado
 cout<<endl;
 cout<<"El vector ordenado es: "<<endl;
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
