// Vector como parametro de entrada de una funcion (Paso de un argumento por referencia)
#include<iostream>
using namespace std;
void modifVect( float vect[], int n );
main()
{
		int i, n;
 		float nf;
	   cout << "\nDigite un numero entero y positivo ";
 		cin >> nf;	   
 		while ( nf <= 0 || nf != (int)nf )
 		{	
			cout << "\nNumero invalido, digite nuevamente ";
	 		cin >> nf;
		}
    n = (int)nf;
    float v[n];
		for ( i = 0; i < n; i++ )
		{
		 		cout << "\nDigite v[" << i << "] ";
				cin >> v[i];
		}
		cout << "\nVector leido ";
		for ( i = 0; i < n; i++ )
				cout << v[i] << ", ";
		modifVect( v, n );
		cout << "\nNuevo vector ";
		for ( i = 0; i < n; i++ )
				cout << v[i] << ", ";
    cout << "\n";
    system( "pause" );
}
void modifVect( float vect[], int n )
{
 		int i;
 		for ( i = 0; i < n; i++ )
 				vect[i] += 2;		    // Aumenta las componentes en dos
}
