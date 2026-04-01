#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
int x, N, k=1;
float z;
srand(time(NULL));
N=50+rand()%51;
cout<<" introduzca un numero positivo y entero: " ;
cin>>z;
while(z<1||z!=int(z))
{
cout<<"ERROR, volver a ingresar el numero: ";
cin>>z;
}
x=int(z);
while(x!=N)
{
 if(x>N)
 cout<<"te pasaste\n ";
 if(x<N)
 cout<<"te falto\n ";
 cout<<"Ingrese de nuevo el numero: ";
 cin>>z;
 while(z<1||z!=int(z))
  {
    cout<<"ERROR, volver a ingresar el numero: ";
    cin>>z;
  }
  x=int(z);
 k=k+1;
}
cout<<"\n\nACERTASTE, el numero de intentos es: "<<k<<"\n\n\n";
system("pause");
return main();
}
