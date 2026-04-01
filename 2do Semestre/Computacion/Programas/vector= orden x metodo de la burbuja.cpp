//ordene las componentes de un vector en forma ascendente utilizando el metodo de ordenacion de la burbuja

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

//algoritmo burbuja
  for(i=0; i<n; i++)
    for(j=0; j<n-1; j++)
      if (v[j]>v[j+1])
          {aux=v[j]; 
          v[j]=v[j+1];
          v[j+1]= aux;}
          
//impresion
          cout<<"El vector ordenado en forma ascendente es v[ ";
          for(i=0;i<n;i++)
          {cout<<" "<<v[i]<<" ";}
      cout<<"]"<<"\n"; 
      system("PAUSE");
    return 0; 
}
int entpos()
{
    float q;
    do{cout<<"digite un nro positivo: ";cin>>q;}
    while(q!=int(q) || q<=0);
    return int (q);

}
