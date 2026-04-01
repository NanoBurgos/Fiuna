// Uso de un vector de componentes enteras y positivas
#include<iostream>
using namespace std;
int indice( int *cont );
main()
{
 			int i, n, menor, contMen, var;
 			var = 0;
 			n = indice( &var );
 			cout << "\nParametro de entrada " << var;
			int vect[n], posMen[n];
			var = 1;
			for ( i = 0; i < n; i++ )
					vect[i] = indice( &var );
			cout << "\nValor del parametro de entrada " << var;
			cout << "\nvect = { " << vect[0];		
			for ( i = 1; i < n; i++ )
			 		cout << ", " << vect[i];
 		  cout << " }";
 		  contMen = 0;
 		  menor = vect[0];
 		  posMen[contMen] = 0;
 		  for ( i = 1; i < n; i++ )
 		  {
 		  		if ( vect[i] == menor )
					{	 
						 contMen++;
					   posMen[contMen] = i;
					}
					else
					{
		 		  		if ( vect[i] < menor )
							{ 
								 menor = vect[i];
								 contMen = 0;
								 posMen[contMen] = i;
							}
					}
			}		
 		  cout << "\n\nLa menor componente es " << menor;
 		  cout << " y ocupa la(s) posicion(es) { " << posMen[0] + 1; 
 		  for ( i = 1; i <= contMen; i++ )
 		  		cout << ", " << posMen[i] + 1;
			cout << " }";
      cout << "\n";
      system( "pause" );
}
int indice( int *cont )
{
 		float nf;
 		if ( *cont )
 			 cout << "\nDigite un numero entero y positivo ";
		else
 			 cout << "\nDigite el numero de componentes del vector ";		
 		cin >> nf;
 		while ( nf <= 0 || nf != (int)nf )
 		{
	 		cout << "\nNumero invalido, digite nuevamente ";
	 		cin >> nf;
		}
		*cont = 10;
		return (int)nf;
}
