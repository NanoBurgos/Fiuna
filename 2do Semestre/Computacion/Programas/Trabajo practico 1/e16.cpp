#include<iostream>
#include<cmath>
using namespace std;
main()
{
float x1, x2, x3, y1, y2, y3, rx, ry, c1, c2, c3, c4, c5, c6, radio;

 cout << "\t\nIntroduzca las coordenadas de 3 puntos: \n\n";  
 cout << "1- ( "; cin >> x1; cout <<"\b" ; cout << " , "; cin >> y1; cout << " )\n\n"; 
 cout << "2- ( "; cin >> x2; cout << " , "; cin >> y2; cout << " )\n\n";
 cout << "3- ( "; cin >> x3; cout << " , "; cin >> y3; cout << " )\n\n";
 
 if ( ((x2-x1)/(y2-y1)) == ((x3-x2)/(y3-y2)) )
    cout << "\t\nError: Los puntos pertenecen a la misma recta. \n\n";
 else
 {
     c1=(x3*x3+y3*y3-x1*x1-y1*y1);
     c2=(2*x3-2*x1);
     c3=(2*(y3-y1));
     c4=(x2*x2+y2*y2-x1*x1-y1*y1);
     c5=(2*(x2-x1));
     c6=(2*(y2-y1));
     
     ry=((c4*c2-c1*c5)/(c6*c2-c3*c5));
     rx=((c4*c3-c1*c6)/(c5*c3-c2*c6));
     
     radio=sqrt((x1-rx)*(x1-rx)+(y1-ry)*(y1-ry));
     
     cout << "\n\tLa ecuacion de la circunferencia es: \n";
     cout << "\t\t(x - " << rx << ")^2 + (y - " << ry << ")^2 = " << radio << "^2";
     cout << "\n\n";
 }
     
     system("pause");
     
     return main ();
     
}

