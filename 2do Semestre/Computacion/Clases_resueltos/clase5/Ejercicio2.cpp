#include<iostream>
using namespace std;
int IntegerPower(int , int); // definimos el prototipo de funcion
main(){
       int a;
       float b; 
       int c;
       cout<< "Ingrese la base : ";
       cin>>a;
       cout<< "Ingrese el Exponente: ";
       cin>>b;
       while(b!=int(b) || (b<=0)){ // validamos que sea mayor a cero y entero
         cout<< "Ingrese el Exponente entero y mayor a cero: ";
         cin>>b;               
       } 
       int g;                  // definimos a "g" como para enviar a la función          
       g = int(b);
       c= IntegerPower(a,g);    //llamamos a la funcion 
       cout<<"El resultado es :"<<c<<"\n";
       system("pause");  
}

int IntegerPower(int a , int g ){  // desarrollamos la función
       int d= 1;
       int i;
       for (i=1; i<=g; i++){
           d*=a;  
          // d = d * a  lo mismo que la linea anterior
       }
       return d; // returna el valor 
}
