#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void atoiInv( int nron, char nroc[] );
char nroch[] = "0123456789";
int main()
{
   int i, nreg, rclin = 81, rclout = 130, *p;
   FILE *pfin, *pfout;
   char regin[rclin], regout[rclout], recnum[6];
   char entrada[] = "MEFAEST.FOR";
   char salida[] = "MEFAESTFOR.SUBR";
   if ( ( pfin = fopen ( entrada, "r" ) ) == NULL )
   {
      printf ("\nError de apertura en archivo %s\n", entrada );
      system ( "pause" );
      exit(1);
   }
   if ( ( pfout = fopen ( salida, "w" ) ) == NULL )
   {
      printf ("\nError de apertura en archivo %s\n", salida );
      system ( "pause" );
      fclose ( pfin );
      exit(1);
   }
   printf ( "\033[2J" );		    	// Limpia la pantalla
   printf ( "\033[0;0f" );  		    // Posiciona el cursor en (0, 0)
	printf ( "\n\n\t\t   UNIVERSIDAD NACIONAL DE ASUNCION" );
   printf ( "\n    FACULTAD DE INGENIERIA - PROGRAMA DEL METODO DE ELEMENTOS FINITOS\n\n" );
   nreg = 0;
   fgets ( regin, rclin, pfin );
   while ( !feof ( pfin ) )
   {
      nreg++;
      if ( strstr ( regin, "SUBROUTINE" ) != NULL )
      {
         strcpy ( regout, "REC: ");
         atoiInv ( nreg, recnum );
         strcat ( regout, recnum );
         strcat ( regout, ": " );         
         strcat ( regout, regin );
         fputs ( regout, pfout );
      }
      fgets ( regin, rclin, pfin );
   }
   fclose ( pfin );
   fclose ( pfout );
   if ( ( pfout = fopen ( salida, "r" )) == NULL )
   {
      printf ("\nNo fue creado el archivo solicitado\n" );
      system ( "pause" );
      exit(1);
   }
   printf ( "\n\t" );
   system( "pause" );   
   return 0;
}
void atoiInv( int nron, char nroc[] )
{
   int i, n, c, d;
   d = 1;
   n = 1;
   while ( d <= nron )
   {
      n++;
      d *= 10;
   }
   d /= 10;
   n--;
   for ( i = 0; i < n; i++ )
   {
      c = nron/d;
      nroc[i] = nroch[c];
      nron = nron - c*d;
      d /= 10;
   }
   while ( i < 5 )
   {
      nroc[i] = ' ';
      i++;
   }
   nroc[i] ='\0';
   return;
}
