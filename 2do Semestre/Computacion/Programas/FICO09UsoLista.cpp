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
