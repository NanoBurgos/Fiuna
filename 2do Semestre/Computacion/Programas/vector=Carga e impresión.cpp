//digite un nro entero positivo y luego n nros correspondientes a las componentes de un vector. Luego imprima dicho vector  
#include <iostream>

using namespace std;
int entpos();

main()
{
      //carga del vector
      int n=entpos(),i;
      float v[n];
      for(i=0;i<n;i++)
      {cout<<"digite v[ "<<i+1<< "]: ";cin>>v[i];}
      
      //impresion del vector
      cout<<"v[ "<<v[0];
      for(i=1;i<n;i++)
      {cout<<" , "<<v[i];}
      cout<<" ]"<<"\n";
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
