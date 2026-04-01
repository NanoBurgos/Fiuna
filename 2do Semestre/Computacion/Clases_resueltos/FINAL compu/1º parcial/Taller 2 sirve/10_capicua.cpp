/*
Determine si un número entero y positivo introducido por teclado es palíndromo
(capicúa).
*/
#include<iostream>
#include<math.h>
using namespace std;
int validacion();

int main()
{int b,a,n,dim=0,k=0;
    cout<<"Inserte un numero entero y positivo";
   n=validacion();
   a=n;
while(a!=0)
{a/=10;
dim++;
}
a=n;
b=dim;
int vect[b];
for(int i=0;i<dim;i++)
{vect[i]=a%10;
a/=10;
cout<<"vect["<<i<<"]="<<vect[i]<<endl;
}
for(int j=0;j<int(dim/2);j++)
{if( vect[j]!=vect[dim-1-j])
k++;}
if(k==0)
cout<<"el numero es capicua\n";
else
cout<<"el numero no es capicua\n"; 
   
   system("PAUSE");
   return 0; }
 //validacion
int validacion()
{ float n;
  cin>>n;
  while(n<=0||n!=int(n))
  {cout<<"El numero debe ser entero y positivo \n\t Digite nuevamente:";
  cin>>n;
  }
  return int(n);
}
