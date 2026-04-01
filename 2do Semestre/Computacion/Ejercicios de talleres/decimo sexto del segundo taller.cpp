/* lea dos números enteros y positivos m y n (validarlos) que representan,
respectivamente, el número de filas y de columnas de una matriz mat de
componentes reales. Luego lea tantos números reales como sean necesarios para
completar las mxn componentes de mat de tal manera que éstas se encuentren en
secuencia estrictamente ascendente. Finalmente
a) imprima las componentes de mat
b) utilizando un puntero asociado, calcule e imprima la suma de la diagonal secundaria
de mat */
#include<iostream>
using namespace std;
float velid();
int main ()
{
    float m, n;
    cout<<"introduzca el numero de filas de la matriz mat: "; cin>>m;
    while(m!=int(m)||m<=0)
    {cout<<"\nrecuerde que la cantidad de filas debe ser entera y positiva";
    cout<<"\nvuelva a introducir la cantidad de filas: "; cin>>m;}
    cout<<"\nintroduzca el numero de columnas de la matriz mat: "; cin>>n;
    while(n!=int(n)||n<=0)
    {cout<<"\nrecuerde que la cantidad de columnas debe ser entera y mayor a 2";
    cout<<"\nvuelva a introducir la cantidad de columnas: "; cin>>n;}
    
    float mat[int(m)][int(n)], *p, a, b, suma;
    int i, j;
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cout<<"\nIntroduzca el elemento ["<<i<<"]["<<j<<"]: "; cin>>a;
                                    if(i!=0||j!=0)
                                    {
                                    	while(a<=b)
                                    	{
                                    		cout<<"\nLas componentes de mat deben estar en una secuencia estrictamente ascendente";
                                    		cout<<"\nVuelva a introducir el elemento ["<<i<<"]["<<j<<"]: "; cin>>a;
										}
									}
									mat[i][j]=a; b=a;
                    }
    }
    // imprimiendo la matriz mat
    cout<<"\n\nLa matriz mat es:";
    for(i=0;i<m;i++)
    {
                    cout<<"\n\t\t";
                    for(j=0;j<n;j++)
                    {
					cout<<mat[i][j]<<"    ";
					}cout<<"\n";
    }
    
    // verificando si se puede sumar la diagonal secundaria
    
    if(m!=n)
    {
    	cout<<"\nNo pueden sumarse las componentes de la diagonal secundaria\nporque mat no es una matriz cuadrada\n\n\n";
	}
	else
	{
		p=&mat[0][0];
	for(i=0;i<m;i++)
    {
    	suma+= *(p+int(n-1) + int(n-1)*i);
	}p=&suma;
		cout<<"\nLa suma de las componentes de la diagonal secundaria es: "<<*p<<endl;
	}
    system ("pause");
}

