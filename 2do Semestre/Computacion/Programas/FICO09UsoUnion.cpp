// Uso de union
#include<iostream>
#include<string.h>
using namespace std;
main()
{
 		int d;
 		char entrada[30];
 		union nombres
 		{  char nomCompl[30];
		 	char apell[20];
			char nom;  };
		union nombres ApeNom;
 		cout << "\n\n\tDigite el nombre comleto (sin espacios) ";
 		cin >> entrada;
 		strcpy( ApeNom.nomCompl, entrada );
 		cout << "\n\n" << ApeNom.nomCompl;
 		cout << "\n" << ApeNom.apell;
 		cout << "\n" << ApeNom.nom;
		cout << "\n\n";
 		system ( "pause" );
}		 	                                                                                                                                                                                                                                                     
