#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int i,sumi=0,sump=0;
    float n;
    
    cout << "\n\n\tIntroducir el numero entero positivo N\n\t"; cin>>n;
    while (n<=0 || int(n)!=n)
          {cout << "\n\n\tVuelva a introducir el numero, recuerde, debe ser entero y positivo\n\t"; cin>>n;
          }
    for(i=0;i<=n;i++)
      { if (i%2==1)
       sumi=sumi+i;
       else
       sump=sump+i;
       }
    cout << "\n\n\tEl numero es "<<n<<"\n\t";
    cout << "\n\n\tLa suma de los numeros pares es "<<sump<<"\n\t";
    cout << "\n\n\tLa suma de los numeros impares es "<<sumi<<"\n\t";
    system ("PAUSE");
    return 0;
    }
