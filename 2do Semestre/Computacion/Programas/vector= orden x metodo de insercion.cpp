//ordene las componentes de un vector en forma ascendente utilizando el metodo de insercion
#include<iostream>

using namespace std;
int entpos();
main()
{
int i, j, n=entpos();
float v[n], aux;
for(i=0;i<n;i++)
{cout<<"digite v[ "<<i+1<< "]: ";cin>>v[i];}
cout<<"v[ "<<v[0];
for(i=1;i<n;i++)
{cout<<" , "<<v[i];}
cout<<" ]"<<"\n";
      
//algortimo de insercion
for(i=1; i<n; i++)
     {
              aux=v[i];
              j=i-1;
              while(v[j]>aux && j>=0)
              {v[j+1]= v[j]; j--;}
              v[j+1]=aux;
     }
           
//impresion
cout<<"\nEl vector ordenado en forma ascendente es V= [ ";
for(i=0;i<n;i++)
{cout<<v[i]<<" ";}
cout<<" ]\n";

system("pause"); 
return 0;
}
  
int entpos()   
{
    float q;
    do{cout<<"digite un nro positivo: ";cin>>q;}
    while(q!=int(q) || q<=0);
    return int (q);
}
