//  Uso de estructuras OPERACIONES CON FRACCIONES
#include<iostream>
#include<stdio.h>
using namespace std;
int lect();
int mcd( int a, int b );
struct fraccion
{	int numer, deno;  };
fraccion suma( fraccion f1, fraccion f2 );
fraccion prod( fraccion f1, fraccion f2 );
int main()
{  int aux, ope = 1;
   fraccion f1, f2, f;
   char msg[][20] = {"de la suma", "de la diferencia", "del producto", "del cociente" };
   while ( ope )
   {  cout << "\nNumerador de la primera fraccion";
	   f1.numer = lect();
	   cout << "\nDenominador de la primera fraccion";   
	   f1.deno = lect();
	   cout << "\nNumerador de la segunda fraccion";   
	   f2.numer = lect();
	   cout << "\nDenominador de la segunda fraccion";   
	   f2.deno = lect();
	   cout << "\n\t\t1. Suma de fracciones";
	   cout << "\n\t\t2. Diferencia de fracciones";
	   cout << "\n\t\t3. Producto de fracciones";
	   cout << "\n\t\t4. Cociente de fracciones\n";
	   cout << "\n\t\t0. Fin del programa\n";   
	   ope = lect();
	   switch(ope)
	   {
	      case  1:	f = suma( f1, f2 );
	      		   break;
	      case  2:	f2.numer = -f2.numer;
	      		   f = suma( f1, f2 );
	      		   break;
	      case  3:	f = prod( f1, f2 );
	      		   break;
	      case  4:	aux = f2.numer;
	      		   f2.numer = f2.deno;
	      		   f2.deno = aux;
	      		   f = prod( f1, f2 );
	      		   break;
	      default:	cout << "\nOperacion no valida";
	   }                
// Impresion del resultado
		if ( ope == 1 || ope == 2 || ope == 3 || ope == 4 )
		{ 	if ( f.deno < 0 )
		 	{ 	f.deno = -f.deno;
			 	f.numer = -f.numer;  }
	    	cout << "\n\n\tRESULTADO " << msg[ope - 1] << ": " << f.numer << "/" << f.deno;  }
	   cout << "\n\nContinua? (0 para finalizar )";
	   cin >> ope;
	   system ( "cls" );
   }
}
int lect()	// Lectura de numero entero
{	float nro;
	do {
		cout << "\n\tDigite un numero entero y positivo ";
		cin >> nro;
	}  while ( nro < 0 || nro != (int)nro );
	return (int)nro;
}
int mcd( int a, int b ) // Halla el mcd de a y b
{	int p, q, r;
	p = a < b ? b : a;
	q = a > b ? b : a;
	r = p%q;
	while ( r )
	{	p = q;	 q = r;
		r = p%q;	 }
	return q;  }
fraccion suma( fraccion f1, fraccion f2 )
{  int aux; 
	fraccion f;
   f.deno = f1.deno*f2.deno/mcd(f1.deno, f2.deno);
   f.numer = f.deno/f1.deno*f1.numer + f.deno/f2.deno*f2.numer;
   aux = mcd( f.numer, f.deno );
   f.numer /= aux;   f.deno /= aux;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
   return f;  }
fraccion prod( fraccion f1, fraccion f2 )
{  int aux;
	fraccion f;
   f.numer = f1.numer*f2.numer;
   f.deno = f1.deno*f2.deno;
   aux = mcd( f.numer, f.deno );
   f.numer /= aux;       f.deno /= aux;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
   return f;
}
