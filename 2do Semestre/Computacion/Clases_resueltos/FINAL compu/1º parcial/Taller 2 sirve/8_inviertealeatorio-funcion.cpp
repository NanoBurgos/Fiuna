/*
Genere un número aleatorio n de 6 dígitos, y mediante una función, invierta sus
dígitos. Muestre en pantalla n y el número formado con los dígitos invertidos. 
Utilizar la función rand() con semilla (srand).*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
 int n,ninv,a;
 srand(time(NULL));
 n=100000+rand()%(1000000-100000);
 cout<<"el numero generado aleatoriamente es "<<n<<endl;
 cout<<"el numero invertido es ";
 for(int i=1;i<=6;i++)
 {a=n%10;n=n/10;
 cout<<a;
}
cout<<"\n";
 system("PAUSE");
 return 0;
}
