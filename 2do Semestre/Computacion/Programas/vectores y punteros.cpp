//Uso de punteros y vectores

#include<iostream>
using namespace std;
main()
{
      int i,n;
      float *p;             //Declaración de puntero
      do{cout<<"Digite el numero de componentes del vector= ";cin>>n;}
      while(n<2);
      
      float v[n];           //Vector
      for(i=0;i<n;i++)
      {cout<<"Digite v["<<i+1<<"]= ";
      cin>>v[i];}
      
      //Impresión de v[n] utilizando el nombre del vector
      cout<<"\n\nv=[ "<<v[0];
      for(i=1;i<n;i++)
      cout<<", "<<v[i];
      cout<<" ]\n";
      
      //Impresión por puntero
      p=&v[0];
      cout<<"v=[ ";
      for(i=0;i<n;i++)
      cout<<*(p+i)<<" ";
      cout<<"]\n";
      system("pause");
}
