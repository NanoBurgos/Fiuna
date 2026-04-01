// Determinacion del intervalo de tiempo entre la hora inicial y final de una actividad
#include<iostream>
using namespace std;
int validah ( int h );
int validams ( int m );
int validaint ( float f );
int main()
{
    int hi, mi, si, ti, hf, mf, sf, tf, dh, dm, ds, dt, error;
    float aux;
		error = 0;
		while ( error == 0 )
		{
     			cout << "\nDigite la hora inicial   : ";
    			cin >> aux;
    			error = validaint( aux );
					if ( error == 1 )
					{
					 	 		hi = (int)aux;
								error = validah ( hi );
					}
		}
		error = 0;
		while ( error == 0 )
		{
     			cout << "\nDigite el minuto inicial : ";
    			cin >> aux;
    			error = validaint( aux );
					if ( error == 1 )
					{
					 	 mi = (int)aux;
						 error = validams ( mi );
				  }
		}
		error = 0;
		while ( error == 0 )
		{
     			cout << "\nDigite el segundo inicial: ";
    			cin >> aux;
    			error = validaint( aux );
    			if ( error == 1 )
    			{
    			     si = (int)aux;
					     error = validams ( si );
	        }
		}
		ti = si + mi*60 + hi*3600;
		error = 0;
		while ( error == 0 )
		{
     			cout << "\nDigite la hora final   : ";
    			cin >> aux;
    			error = validaint( aux );
    			if ( error == 1 )
    			{
    			     hf = (int)aux;
							 error = validah ( hf );
					}
		}
		error = 0;
		while ( error == 0 )
		{
     			cout << "\nDigite el minuto final : ";
    			cin >> aux;
    			error = validaint( aux );
    			if ( error == 1 )
    			{
    			 	   mf = (int)aux;
							 error = validams ( mf );
					}
		}
		error = 0;
		while ( error == 0 )
		{
     			cout << "\nDigite el segundo final: ";
    			cin >> aux;
    			error = validaint( aux );
    			if ( error == 1 )
    			{
					 	   sf = (int)aux;
							 error = validams ( sf );
					}
		}
		tf = sf + mf*60 + hf*3600;
		if ( tf <= ti )
		{
		 	 cout << "\nEl tiempo final no es mayor que el inicial\n";
		 	 system ( "pause" );
		 	 return 0;
		}
		dt = tf - ti;
		dh = dt/3600;
		dt = dt%3600;
		dm = dt/60;
		ds = dt%60;
		cout << "\nLa diferencia de tiempo es ";
		cout << dh << " h " << dm << " min " << ds << " s";
    cout << "\n";
    system ( "pause" );
}
int validah ( int h )
{
 		if ( h < 0 || h > 23 ) return 0;    // con error
		return 1;                           // valor correcto
}
int validams ( int m )
{
 		if ( m < 0 || m > 59 ) return 0;
		return 1;
}		
int validaint ( float f )
{
 		if ( f != (int)f ) return 0;
		return 1;
}		
