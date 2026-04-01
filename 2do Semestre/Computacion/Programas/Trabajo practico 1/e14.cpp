#include<iostream>
using namespace std;
int main()
{
    float m,n,p,q;

      cout <<"Introduzca dos numeros decimales:\n";
      cout << "\tm: "; cin>> m;
      cout << "\n\tn: ";cin >> n;
      p=int(m)+n-int(n);
      q=int(n)+m-int(m);
      
      cout << "Tus numeros se han intercambiado decimales D:\n\n";
      cout << "\tp= " << p;
      cout << "\t\t\tq= " << q << "\n\n";
      
      system ("pause");
return 0;
}
