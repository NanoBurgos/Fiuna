#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i, recnum = 0;
 	 char registro[128], *regaux, nombre[32], archivos[100][32];
 	 FILE *pf;
 	 system("dir > archivos.txt ");
 	 pf = fopen ( "archivos.txt", "r" );
 	 if ( pf == NULL ) 
	  	 cout << "\n\tError al abrir el achivo\n";
 	 else
	 {
       while ( !feof( pf ) )
       {
	 	 	  fgets( registro, 128, pf );		  		 
           recnum++;
           if ( recnum > 7 && !strstr( registro, "bytes" ) )
           { 
	 	 	     regaux = registro;
	 	 	     strcpy ( nombre, ( registro + 36 ) );
	 	 	     strcpy( archivos[recnum - 8], nombre );
			  }
	    } 
    }
    cout << "\n";
    for ( i = 0; i < recnum - 10; i++ )
    {
    	 cout << "Archivo[" << i << "] : " << archivos[i];
    	 if ( i && i%20 == 0 )
		 {
		  	 cout << "\n";		  	 
		  	 system ( "pause" );
		  	 system ( "cls" );
		  	 cout << "\n";
		 }
	 }
	 cout << "\n";
 	 system("pause");
}
