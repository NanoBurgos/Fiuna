/*	Ejercicio: 8.6. Pag. 135: C Algoritmos, programacion y
   estructura de datos - Joyanes - Fernandez - Sanchez - Zahonero
	Escribir un programa. en lenguaje C/C++, que tenga
	como entrada una secuencia de numeros enteros positivos
	(mediante una variable entera). El programa debe hallar
	la suma de los	digitos de cada entero y encontrar cual
	es el entero cuya suma de digitos es mayor. La suma de
	digitos ha de ser con una funcion recursiva.
Observacion: El programa lee numeros enteros. Finaliza
   cuando lee un numero que no lo es  */
#include<iostream>
using namespace std;
int sumadig( int nro );
int main()
{
 	 int n, max = 0, sum, sumMax = 0;
/*  Variables del programa.
	 Entrada:
	     n     : numero entero a considerar.
    Salida:
		  max   : numero entero cuya suma de digitos es la mayor en el conuunto.
		  sumMax: suma de los digitos de max  */
 	 do {
 	 	 cout << "\nDigite un numero entero ";
 	 	 cin >> n;
 	 	 if ( n > 0 )
 	 	 {
		  	 sum  = sumadig( n );
		  	 if ( sum > sumMax )
 			 {
			  	 sumMax = sum;
			  	 max = n;
		    }
		 }
	 }  while ( n > 0 );
 	 cout << "\n\tEl numero seleccionado es " << max; 	 
 	 cout << "\n\tLa suma de sus digitos es " << sumMax;
 	 cout << "\n";
 	 system ( "pause" );
}
int sumadig( int nro )
{
 	 int div = 10;
/*  Varialbes de la funcion:
	 Entrada:
	 	 nro : numero a analizar.
	 Valor retornado:
	 	 Suma de digitos del numero (recursivamente)
	 Auxiliar:
	 	 div : unidad seguida de ceros,  inicialmente inmediato mayor que nro.  */	 
  	 if ( nro < 10 ) return nro;
 	 while ( nro > div ) div *= 10;
 	 div /= 10;
    return ( nro/div + sumadig( nro - (nro/div)*div ) );
}
