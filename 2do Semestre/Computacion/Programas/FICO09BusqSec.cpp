// Busqueda secuencial en un vector
#include<iostream>
using namespace std;
main()
{
	int vect[100], i, a;
	srand( time(NULL)  ); 		
	for ( i = 0; i < 100; i++ )
		 vect[i] = rand()%1000 + 1;
	for ( i = 0; i < 100; i++ )
	{
	    if ( i%10 == 0 ) cout << "\n";	 	 
	    cout << vect[i] << ",  ";
   }
   do {
		cout << "\nDigite el numero a buscar ";
		cin >> a;
		if ( a <= 0 ) break;
		for ( i = 0; i < 100; i++ )
		{
		 	 if ( a == vect[i] ) break;
	   }
	   if ( i < 100 )
 	   {
	  	    cout << "\n\tEl numero " << a;
	  	    cout << " ocupa la posicion " << i + 1;
	  	    cout << " en el vector";
 	   }
      else
      {
	  	    cout << "\n\tEl numero " << a;
	  	    cout << " no se encuentra en el vector";
      }
	} while( a );
}
