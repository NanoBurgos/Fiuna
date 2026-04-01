/* 
1)	Diseñar un programa en C/C++ que determine las raíces de una ecuación cuadrática,
 y los imprima en pantalla teniendo como entradas los coeficientes (a, b y c) de dicha ecuación.
  Este algoritmo debe también considerar las raíces imaginarias de dicha ecuación.
*/

#include<iostream>
#include<math.h>
using namespace std;
main(){
       int a, b, c;
       float x1, x2;
       cout<<"Ingrese el valor de a:";
       cin>>a;
       cout<<"Ingrese el valor de b:";
       cin>>b;
       cout<<"Ingrese el valor de c:";
       cin >>c;
       if(b*b-4*a*c<0){
        cout<<"Las raices son imaginarias\n";               
       }else{
        cout<<"Las raices no son imagnarias\n" ;
        x1 = (b*(-1)+ sqrt(pow(b,2)-4*a*c))/2*a ;
        x2 = (b*(-1)- sqrt(pow(b,2)-4*a*c))/2*a ; 
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
       }
       if ((pow(b,2)-4*a*c)<0){
       cout<<"Las raices son imaginarias01\n"; 
       }                                            
       system("pause");
       return 0;
}       
