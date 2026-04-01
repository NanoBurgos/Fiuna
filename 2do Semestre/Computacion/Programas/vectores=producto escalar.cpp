#include <iostream>

using namespace std;
int entpos();

main()
{
      int n=entpos(),i;
      float v[n], p[n], prod=0;
      for(i=0;i<n;i++)
      {cout<<"digite v[ "<<i+1<< "]: ";cin>>v[i];
       cout<<"digite p[ "<<i+1<< "]: ";cin>>p[i];}
   
      for(i=0;i<n;i++)
      prod+= v[i]*p[i];
      cout<<"El producto es "<<prod;
      
    system("PAUSE");
    return EXIT_SUCCESS;
}
int entpos()
{
    float q;
    do{cout<<"Ingrese un nro entero positivo: ";cin>>q;}
    while(q<=0 or q!=int (q));
    return int (q);
}
