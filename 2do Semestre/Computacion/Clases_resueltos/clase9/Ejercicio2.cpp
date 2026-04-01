#include<iostream>
using namespace std;
main(){
       int i , cont=0;;
       float suma=0;
       
       int vec[10];
       cout<<"Ingrese los elementos del vector\n";
       for(i=0;i<10;i++){// ingreso de datos
          cout<<"vec["<<i+1<<"]: " ; 
          cin>>vec[i];       
       }  
       for(i=0;i<10;i++){ 
         if (vec[i]>0){
           suma = suma + vec[i];
           cont++;              
         }                 
       }
       cout<<"la suma es: "<<suma<<endl; 
       cout<<"la promedio es: "<<1.0*suma/cont<<endl;                   
       system("pause");
}     
