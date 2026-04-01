/*	Ejercicio: 10.8. Pag. 171: Se dispone de dos vectores,
   maestro y esclavo, de componentes enteras y positivas e
	igual numero de elementos. Se deben imprimir en dos
	columnas	adyacentes.	Se ordena el vector maestro, pero
	siempre que un elemento de maestro se mueva, el elemento
	correspondiente de escalvo debe moverse tambien; es
	decir, cualquier accion hecha con maestro[i] debe
	hacerse a esclavo[i]. Despues de ralizar la ordenacion
	se imprimen de	nuevo los vectores.
	Escribir un programa que realice esta tarea.
Observacion: Utilizar como algoritmo de ordenacion, el
   metodo de insercion  */
#include<iostream>
using namespace std;
int main()
{
   int i, j, n, auxMaes, auxEscl, randMax = 100;
/* Variables del programa.
	Entrada:
	     n      : numero componentes de los vectores.
	     maestro: vector de n componentes (se genera con numeros pseudoaleatorios)
	     esclavo: vector de n compoentens (se genera con numeros naturales en secuencia)
   Salida:
		  maestro: vector ordenado en secuencia ascendente
		  esclavo: vector indicando las posiciones iniciales de la componentes de maestro  */
 	do {
 		cout << "\nDigite un numero entero ";
 	 	cin >> n;
 	}	while ( n < 2 );
   int maestro[n], esclavo[n];
// Generacion de datos   
   srand( time( NULL ) );
   for ( i = 0; i < n; i++ )
	{	maestro[i] = rand()%randMax + 1;
		esclavo[i] = i + 1;	}
// Impresion de los vectores generados
   cout << "\tmaestro  esclavo";   
   for ( i = 0; i < n; i++ )
   { 	cout << "\n\t   " << maestro[i] << "\t    " << esclavo[i];  }
   cout << "\n";
 	system ( "pause" );   
// Ordenacion de maestro y movimiento de esclavo
	for ( i = 1; i < n; i++ )
	{	auxMaes = maestro[i];
		auxEscl = esclavo[i];
		j = i - 1;
		while ( j >= 0 && auxMaes < maestro[j] )
		{	maestro[j+1] = maestro[j];
			esclavo[j+1] = esclavo[j];
			j--;	}
		maestro[j+1] = auxMaes;
		esclavo[j+1] = auxEscl;		}
// Impresion de los vectores ordenados
   cout << "\tmaestro  esclavo";   
   for ( i = 0; i < n; i++ )
   { 	cout << "\n\t   " << maestro[i] << "\t    " << esclavo[i];  }
   cout << "\n";
 	system ( "pause" );
}
