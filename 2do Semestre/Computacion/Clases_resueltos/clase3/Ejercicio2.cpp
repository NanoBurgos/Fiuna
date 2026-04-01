#include<iostream>
#include<math.h>
using namespace std;
main(){
     float a, b, c, d;
     float d1, d2, d3;
     float r1, r2, r3;
     d1=0, d2=0, d3=0;  
     //ingresamos los valores de a, b, c, d;
     cout<<"Ingrese el valor de a:";
     cin>>a;
     cout<<"Ingrese el valor de b:";
     cin>>b;
     cout<<"Ingrese el valor de c:"; 
     cin>>c;
     cout<<"Ingrese el valor de d:"; 
     cin>>d;
     d1= b-a;
     d2= c-b;
     d3= d-c;
     //imprimimos las diferencias 
     cout<<d1<<"\n";
     cout<<d2<<"\n";
     cout<<d3<<"\n";
     if ((d1==d2) && (d2==d3)&& (d1==d3)){ //Preguntamos si son iguales las diferencias 
           cout<<"Son terminos de una prgresion arimetica"  ;   
     }else {
           cout<<"NO SON TERMINOS DE UNA PROGRESION ARITMETICA\n";
     }  
     //imprimimos los restos;
     r1 = b/a;
     r2 = c/b;
     r3 = d/c;
     if ((r1==r2) && (r2==r3)&& (r3==r1)){ //Preguntamos si son iguales las diferencias 
           cout<<"Son terminos de una progresion geometrica"  ;   
     }else {
           cout<<"NO SON TERMINOS DE UNA PROGRESION GEOMETRICA\n";
     }                  
     system("pause");
     return 0;
}          
