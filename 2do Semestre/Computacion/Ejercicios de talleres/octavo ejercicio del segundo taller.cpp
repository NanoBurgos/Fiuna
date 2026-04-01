/* Que determine si un numero es tartamudo.
Un numero es tartamudo cuando cada cifra aparece al menos dos veces seguidas.
Encontrar cuantos números tartamudos hay menores que 100000 y mostrarlos en pantalla.
(Por ejemplo, son tartamudos: 1122. 33300.)*/
#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n=0, i=1;
	cout<<"conciderando los numeros tartamudos comprendidos entre 0 y 100000\n";
	cout<<"los numeros son:";
	while(n!=100000)
	{
		n=n+1;
		if (n%10==n/10||(n%100-n%10)==n/100||(n%1000-n%100)==n/1000||(n%10000-n%1000)==n/10000||(n&100000-n&10000)==n/100000)
		{
			cout<<"\nN"<<i<<"= "<<n;
			i++;
		}
	}
	cout<<"\n\nHay en total "<<i<<" numeros tartamudos\n\n\n\n";
	system ("pause");
}
