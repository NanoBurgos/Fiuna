/* Ingresar un vector de "n" componentes enteras y mayores que 1
   Calcular la(s) componente(s) de mayor
   cantidad de divisores primos. */
#include<iostream>
using namespace std;
int valid();
main()
{int n,i,j,k,aux;
 cout<<"Ingrese la cantidad de componentes: ";
 n=valid();
 int v[int(n)];
 int cant[int(n)];
 for(i=0;i<n;i++) 
  cant[i]=0;
 cout<<endl;
 for(i=0;i<n;i++)
 {
  cout<<"v["<<i+1<<"]= ";
  v[i]=valid();
 }
 cout<<endl;
 cout<<"El vector ingresado es v=[ "<<v[0];
 for(i=1;i<n;i++)
 {
  cout<<", "<<v[i];
 }
 cout<<" ]"<<endl;
 for(i=0;i<n;i++)
 {
  for(j=2;j<=v[i];j++)
  {
   if(v[i]==1)
   cant[i]=1;
   else
    if(v[i]%j==0)
    {aux=2;
     while(j%aux!=0)
     aux++;
     if(j==aux)
     cant[i]++;
    }
  }
 }
 cout<<endl;
 cout<<"Cantidad de divisores primos es respectivamente [ "<<cant[0];
 for(i=1;i<n;i++)
 {
  cout<<", "<<cant[i];
 }
 cout<<" ]"<<endl;
 j=0;
 for(i=0;i<n;i++)
 {
  if(cant[j]<cant[i])
   j=i;
 }
 aux=0;
 for(i=0;i<n;i++)
 {
  if(cant[j]==cant[i])
   aux++;
 }
 cout<<endl;
 if(aux>1 && aux<n)
 {
  cout<<"Las componentes de mayor cantidad de divisores primos son:"<<endl;
  for(i=0;i<n;i++)
   if(cant[j]==cant[i])
    cout<<"v["<<i+1<<"]= "<<v[i]<<endl;
 }
 else
 {
  if(aux==1)
  {cout<<"La componente de mayor cantidad de divisores primos es:"<<endl;
   cout<<"v["<<j+1<<"]= "<<v[j]<<endl;}
  else
  cout<<"Todas las componente tienen igual cantidad de divisores primos"<<endl;
 }
 cout<<endl;
 system("pause");}

int valid()
{float aux;
 cin>>aux;
 while(aux!=int(aux)||aux<=1)
 {cout<<"\n\nDebe ser entero y mayor a 1: ";
  cin>>aux;}
 return int (aux);}
