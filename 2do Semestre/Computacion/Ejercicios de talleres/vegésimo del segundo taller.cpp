/* lea e imprima un número entero y positivo n, mayor que 2 y menor o igual a 20, y un
conjunto de n pares (x,y) de números de punto flotante, que representan resultados de
mediciones en laboratorio, luego utilzando un puntero, clasifique estos pares, en
secuencia ascendente por su primerea coordenada e imprima el resultado. */
#include<iostream>
using namespace std;
void ordenamiento(float *a, float *b, float n);
int main()
{
	float n;
	int i;
	cout<<"Introduzca la cantidad de mediciones.";
	cout<<"\nla cantidad de mediciones debe ser mayor a 2 y menor o igual a 20: "; cin>>n;
	while(n<=2||n>20||n!=int(n))
	{
		cout<<"\nLa cantidad de mediciones debe ser un numero entero, mayor que 2 y";
		cout<<"\n menor o igual a 20\nVuelva a introducir el nuemro de mediciones"; cin>>n;
	}
	cout<<"\n\nEl numero de mediciones es: "<<n;
	float v[int(n)], u[int(n)];
	for(i=0;i<n;i++)
	{
		cout<<"\nIntroduzca los elementos de la medicion n"<<i+1<<":\nx= "; cin>>v[i]; cout<<"y= "; cin>>u[i];
		cout<<"n"<<i+1<<"= ("<<v[i]<<","<<u[i]<<")\n"; 
	}
	// ordenando las mediciones
	ordenamiento(&v[0], &u[0], n);
	// imprimiendo las mediciones ordenadas
	
	cout<<"\nlas mediciones ordenadas son:\n";
	for(i=0;i<n;i++)
	{
		cout<<"m"<<i+1<<"= ("<<v[i]<<","<<u[i]<<")\n\n";
	}
	
	system ("pause");
}



void ordenamiento(float *a, float *b, float n)
{
	int i, j, lugar; float menor;
	for(i=0;i<n;i++)
	{
		menor=*(a+i); lugar=i;
		for(j=i;j<n;j++)
		{
			if(*(a+j)<menor)
			{
				menor=*(a+j); lugar=j;
			}
		}
		*(a+lugar)=*(a+i); *(a+i)=menor; menor=*(b+lugar); *(b+lugar)=*(b+i); *(b+i)=menor;
	}
}
