// utilizacion de la estructura de arbol Cap. 13 de "Estructuras de datos en C"
// Hoyanes - Fernandez - Sanchez - Zahonero
#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
typedef struct Arbol														// Pag. 295
{	int info;
	struct Arbol* izq;
	struct Arbol* der;
}	arbol;
void inicializar( arbol ** a );
int vacio( arbol * a);
void insertar( arbol ** a, int e );
void borrar( arbol ** a, int c );
void buscar( arbol * a, int c, int * encontrado );
void recorreras( arbol * a);
arbol * construir( arbol * a, int e, arbol * b); 
void menor( arbol ** a );
void eliminar ( arbol ** a );
void inicializar( arbol ** a )										// Pag. 304.
{	*a = NULL;	}
int vacio( arbol * a)
{	return a == NULL; 	}
void buscar( arbol * a, int c, int * encontrado )				// Pag. 304
{	if ( vacio( a ) )
		*encontrado = False;
   else
 	   if ( a->info == c )
 	   	*encontrado = True;
	   else
	   	if ( a->info > c )
	   		buscar( a->izq, c, encontrado );
   		else
	   		buscar( a->der, c, encontrado );	}
arbol * construir( arbol * a, int e, arbol * b)					// Pag. 304
{	arbol * nuevo;
	nuevo = ( arbol*)malloc(sizeof(arbol));
	nuevo->info = e;
	nuevo->izq = a;
	nuevo->der = b;
	return nuevo;	}
void insertar( arbol ** a, int e )									// Pag. 305
{	if ( vacio(*a) )
		*a = construir( NULL, e, NULL );
   else
      if ( (*a)->info > e )
      	insertar( & (*a)->izq, e );
     	else
      	if ( (*a)->info < e )     	
      		insertar( & (*a)->der, e );	}
void menor( arbol* a, int* e )										// Pag. 305
{	if ( a->izq == NULL )
	   *e = a->info;
	else
		menor( a->izq, e );	}
void eliminar( arbol ** a )											// Pag. 305
{	arbol *auxi;
	int e;
	if ( (*a)->izq == NULL )
	{	auxi = *a;	*a = (*a)->der;
		free ( auxi );	}
	else
		if ( (*a)->der == NULL )
		{	auxi = *a; *a = (*a)->izq;
			free( auxi );	}
		else
		{	menor ( (*a)->der, &e );	(*a)->info = e;
			borrar( &(*a)->der, e );	}	}
void borrar( arbol ** a, int c )										// Pag. 306
{	if ( *a != NULL )
		if ( (*a)->info == c )
			eliminar( a );
		else
	 	   if ( (*a)->info > c )
	 	   	borrar( &(*a)->izq, c );
 	   	else
 	   		borrar( &(*a)->der, c );	}
void recorreras( arbol * a )
{	if ( !vacio( a ) )
	{	recorreras( a->izq );
		printf(" \%d ", a->info );
		recorreras( a->der );	}	}
void recorrerdes( arbol * a )
{	if ( !vacio( a ) )
	{	recorrerdes( a->der );
		printf( " %d ", a->info );
		recorrerdes( a->izq );	}	}	
void copiar ( arbol * a, arbol ** acop )							// Pag. 296
{	arbol * aiz;
	arbol * ade;
	arbol * acopiz;
	arbol * acopde;
	int e;
	if ( a == NULL )
		*acop = NULL;
	else
	{	e = a-> info;
		aiz = a->izq;
		ade = a->der;
		copiar(aiz, &acopiz);
		copiar(ade, &acopde);
		*acop = (arbol*)malloc(sizeof(arbol));
		(*acop)->info = e;
		(*acop)->izq = aiz;
		(*acop)->der = ade;	}	}
void espejo ( arbol* a, arbol** aespejo )							// Pag. 296
{	arbol* aiz;
	arbol* ade;
	arbol* aespejoiz;
	arbol* aespejode;
	int e;
	if ( a == NULL )
		*aespejo = NULL;
	else
	{	e = a->info;
		aiz = a->izq;
		ade = a->der;
		espejo( aiz, &aespejoiz );
		espejo( ade, &aespejode );
		*aespejo = ( arbol*)malloc(sizeof(arbol));
		(*aespejo)->info = e;
		(*aespejo)->der = aespejoiz;
		(*aespejo)->izq = aespejode;	}	}
void dibujar(arbol* a, int nivel)									// Pag. 298
{	int i;
	if ( a != NULL )
	{	dibujar( a-> der, nivel + 1 );
		for ( i = 1; i <= nivel; i++ ) printf( "   " );
		printf( "%d\n", a -> info );
		dibujar( a->izq, nivel + 1 );	}	}
int iguales( arbol* a, arbol* b )									// Pag. 299
{	if ( a == NULL )
		if ( b == NULL )
			return True;
		else
			return False;
	else
		if ( b == NULL )
			return False;
		else
	 		if ( a->info != b->info )
	 			return False;
 			else
	 	      return iguales( a->izq, b->izq ) && iguales( a->der, b->der );	}
void contarhojas( arbol* a, int* cont )							// Pag. 299
{	if ( a != NULL )
		if ( ( a->izq == NULL ) && ( a->der == NULL ) )
			*cont = *cont + 1;
		else
		{	contarhojas( a->izq, cont );
			contarhojas( a->der, cont );	}	}
int mayor( int n1, int n2 )											// Pag. 300
{	if ( n1 > n2 )
		return n1;
   else
 	   return n2;	}
int altura( arbol* a )													// Pag. 300
{	if ( a != NULL )
		return 1 + mayor( altura( a->izq ), altura( a->der ) );
   else
      return 0;	}
void nodosdeniveldado( arbol* a, int n )							// Pag. 300
{	arbol* aiz;
	arbol* ade;      
	if ( n < 0 )
		printf( "error " );
	else
		 if ( n == 0 )
		 {	 if ( a != NULL )
		 	 	 printf( " %d  ", a->info );	}
 	 	 else
	 	    if ( a != NULL )
	 	    {	 aiz = a->izq; 	ade = a->der;
		 	 	 nodosdeniveldado( aiz, n - 1 );
		 	 	 nodosdeniveldado( ade, n - 1 );	}	}
void arbolentre( arbol* a, int p, int q )							// Pag. 301
{	if ( a != NULL )
		if ( p > 0 )
		{	arbolentre( a->izq, p - 1, q - 1 );
			arbolentre( a->der, p - 1, q - 1 );	}
		else
			if (  ( p <= 0 ) && ( q >= 0 ) )
			{	printf( "%d, ", a->info );
				arbolentre( a->izq, p - 1, q - 1 );
				arbolentre( a->der, p - 1, q - 1 );	}	}
int main()																	// Pag. 306
{	int nm;
	arbol *a;
	char pausa;
	inicializar( &a );
	printf( "Deme numero ( 0 -> Fin ): ");
	scanf("%d*c ", &nm );
	while ( nm != 0 )
	{	insertar( &a, nm );
		printf( "Deme numero ( 0 -> Fin ): " );
		scanf( "%d*c ", &nm );	}
	recorrerdes ( a );
	puts("");
	recorreras( a );
	printf( "\n Pulse cualquier tecla para continuar ... " );
	scanf( "%d*c", &pausa );
	return 0;	}
