#include<iostream>
using namespace std;
main(){
     int i, vec[10];
     int suma=0,cont=0, contAl=0; 
     float prom=0.0 ;
     cout<<"Ingrese los elementos del vector\n";
     for(i=0;i<10;i++){     //ingreso de datos al vector
          cout<<"vec["<<i+1<<"]: " ; 
          cin>>vec[i];       
     }
     for(i=0;i<10;i++){
           suma = suma + vec[i];
           cont++;              
         }                 
     prom =1.0*suma/cont;// promedio de calificaciones
     for(i=0;i<10;i++){  // Calculo de cantidad de alumnos por debajo del promedio
          if (prom>vec[i]){
           contAl++; 
           }             
         }
     
     cout<<"La cantidad de alumnos que con menor nota al promedio es:" <<contAl<<endl;
     system("pause");
}      
