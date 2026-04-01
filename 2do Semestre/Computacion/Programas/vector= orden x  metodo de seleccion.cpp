//ordene las componentes de un vector en forma ascendente utilizando el metodo de seleccion
#include<iostream>

using namespace std;
int entpos();
main()
{
int i, j, n=entpos(), indicemin;
float v[n], aux;
for(i=0;i<n;i++)
      {cout<<"digite v[ "<<i+1<< "]: ";cin>>v[i];}
      cout<<"v[ "<<v[0];
      for(i=1;i<n;i++)
      {cout<<" , "<<v[i];}
      cout<<" ]"<<"\n";
      
//algortimo de seleccion
     for(i=0; i<n-1; i++)
{    indicemin=i;
     for (j=i+1;j<n;j++)
     if(v[j]<v[indicemin])
     indicemin=j;
     
     aux= v[indicemin];
     v[indicemin]=v[i];
     v[i]=aux;        
}
 
//impresion
cout<<"\nEl vector ordenado es V= [ ";
for(i=0;i<n;i++)
{cout<<v[i]<<" ";}
cout<<" ]\n";

system("pause"); 
}
  
int entpos()   
{
    float q;
    do{cout<<"digite un nro positivo: ";cin>>q;}
    while(q!=int(q) || q<=0);
    return int (q);
}
