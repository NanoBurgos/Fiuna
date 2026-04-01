// Utilizacion de enumeraciones
#include<iostream>
using namespace std;
main()
{
 		int d;
 		enum dias
 			  { domingo = 1, lunes, martes, miercoles, jueves, viernes, sabado };
 		enum dias semana;
 		cout << "\n\n\tDigite en dia ";
 		cin >> d;
 		switch ( d ) {
 				 case domingo:    cout << "\tDia domingo";
 				 					   break;
 				 case lunes  :    cout << "\tDia lunes";
				 					   break;
 				 case martes :    cout << "\tDia martes";
				 					   break;
 				 case miercoles:  cout << "\tDia miercoles";
				 					   break;
 				 case jueves:     cout << "\tDia jueves";
				 					   break;
 				 case viernes:    cout << "\tDia viernes";
				 					   break;
 				 case sabado:     cout <<  "\tDia sabado";
				 					   break;
				 default:  cout << "\n\tDia Dia invalido";
 		}
// Observese que ocurre si se imprimen los siquientes:
		cout << "\n\n\tDomingo = " << domingo << ", lunes = " << lunes;
		cout << ", martes = " << martes << ", miercoles = " << miercoles << ",";
		cout << "\n\tjueves = " << jueves << ", viernes = " << viernes;
		cout << ", sabado = " << sabado;
		cout << "\n\n";
 		system ( "pause" );
}		 	                                                                                                                                                                                                                                                     
