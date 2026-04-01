#include<stdio.h>
#include<stdlib.h>
typedef int Telemento;
typedef struct Registro
{  Telemento e;
   struct Registro* Sig;
}	Nodo;
void VaciaL( Nodo ** L )
{	*L = NULL;	}
int EsVacia( Nodo * L )
{	return ( L == NULL );	}
void AnadePL( Nodo ** L, Telemento e )
{	Nodo *Nuevo;
	Nuevo = (Nodo*)malloc(sizeof(Nodo));
	Nuevo -> e = e;
	Nuevo -> Sig = *L;
	*L = Nuevo;	}
void BorraPL ( Nodo ** L )
{	Nodo *Ptr;
	Ptr = *L;
	if ( Ptr == NULL )
	{	printf( "error en BorraPL" );
		return;	} 	  
	*L = Ptr -> Sig;
	free( Ptr );	}
Nodo *RestoL ( Nodo *L )
{	if ( L == NULL )
	{	printf ( "error en RestoL \n" );
		return NULL;	}
	return L -> Sig;	}
void ModificaL ( Nodo ** L, Telemento e )
{	if ( L == NULL )
	{	printf ( "error en ModificaL\n" );
		return;	}
	(*L) -> e = e;	}
Telemento PrimeroL ( Nodo * L )
{	if ( L == NULL )
	{	printf ( "error en PrimeroL\n" );
		return 0;	}
	return L -> e;		}
Nodo * NuevoNodo ( Telemento e )
{	Nodo *nn;
	nn = (Nodo*)malloc(sizeof(Nodo));
	nn -> e = e;
	nn -> Sig = NULL;
	return nn;	}
void IsertarOrd( Nodo ** L, Telemento e )
{	Nodo *Nuevo, *Ant, *Pos;
	Nuevo = NuevoNodo( e );
	if ( *L == NULL )
		*L = Nuevo;
	else
 		if ( e <= (*L) -> e )
 		{	Nuevo -> Sig = *L;
 			*L = Nuevo;	}
	   else
	   {	/* la inserccion se realiza en la primera posicion de la lista */
	   	Ant = Pos = *L;
	   	while ( ( e > Pos -> e ) && ( Pos -> Sig != NULL ) )
	   	{	Ant = Pos;
	   		Pos = Pos -> Sig;	}
  			if ( e > Pos -> e )
  				Ant = Pos;
			Nuevo -> Sig = Ant -> Sig;
			Ant -> Sig = Nuevo;	}	}
void BorrarOrd( Nodo ** L, Telemento e )
{	Nodo *Ant, *Pos;
	int Encontrado = 0;
	Ant = NULL;
	Pos = *L;
	while ( ( !Encontrado ) && ( Pos != NULL ) )
	{	Encontrado = ( e <= ( Pos -> e ) );
		if ( !Encontrado )
		{	Ant = Pos;
			Pos = Pos -> Sig;	}	}
	if ( Encontrado )			/* Se conto la busqueda hay que ver si esta en lista */
 		Encontrado = ( ( Pos -> e ) == e );
	if ( Encontrado )
	{	if ( Ant == NULL )
			*L = Pos -> Sig;
	   else
	   	 Ant -> Sig = Pos -> Sig;
    	free( Pos );	}	}
