// Representacion de grafos
#include<iostream>
#include<string.h>
using namespace std;
int lectInt( char mensaje[] );
main()
{
  char msg[2][30] = { "Digite el numero de vertices ", "Digite el numero de arcos    " };
  int i, j, k, l;
  p, q;
  p = lectInt( msg[0] );
  q = lectInt( msg[1] );
// Matriz de adyacencias.  
  int mat[p][q];
  for ( i = 0; i < p; i++ )
  {	for ( j = 0; j < q; j++ )
  		{ 	 do {
			 	 cout << "\n\tDigite mat[" << i << "][" << j << "] = ";
		 	    cin >> mat[i][j];
			 }	 while ( mat[i][j] != 0 && mat[i][j] != 1 );	  	}	}
  for ( i = 0; i < p; i++ )
  {	cout << "\n";
  		for ( j = 0; j < p; j++ )
  		{ 	 cout << "\t" << mat[i][j];	}	}
// Matriz de adyacencias.  		
  char nodos[p], sig[p], ady[p], dest[q], enl[q];
  for ( i = 0; i < p; i++ )
  		nodos[i] = i + 65;
  cout << "\n";
  for ( i = 0; i < p; i++ )
  		cout << "\t" << nodos[i];
  k = 0;
  i = 0;
  ady[i] = i;
  for ( i = 1; i < p; i++ )
  {	j = 0;
		while ( mat[i][j] == 0 && j < p )
		{  j++;
			if ( j < p )
			{ 	k++;
			   ady[i] = k;
				dest[k] = j;
				enl[k] = 	}
     	   l = k;
			j++:
		   while ( mat[i][j] == 0 && j < p )
		   {
		 		k++;
	      	enl[l] = k;
				dest{k] = j;
			}
			else
			{
			   
				}	}
	      	
  cout << "\n\n\t";
  system( "pause" );
}
int lectInt( char mensaje[] )
{	float nro;
	do {
		cout << "\n\t" << mensaje;
		cin >> nro;
	}	while ( nro != (int)nro || nro <= 0 );
	return (int)nro;
}
