/*
Dado un número natural n , desarrolle un algoritmo que calcule la sumatoria 
y el promedio de los números menores a n y que sean múltiplos de 3.
*/
#include <iostream>
using namespace std;
main(){
     int n, i=1, suma= 0, cont=0 ;  
     float promedio = 0.0;
     cout<<"Ingrese el numero: ";
     cin>>n;
     while(i<n){
       if (i%3==0){
         suma+=i;
         cont++;          
       }
       i++;                     
     }          
    if (cont) {
      promedio = 1.0* suma/cont;
      cout<<"LA SUMA ES: "<<suma<<endl;  
      cout<<"EL PROMEDIO ES:" <<promedio<<endl;     
    } else {
      cout<<"El NUMERO INGRESADO ES MENOR QUE N";     
    }       
    system("pause");
    return 0;          
}       
