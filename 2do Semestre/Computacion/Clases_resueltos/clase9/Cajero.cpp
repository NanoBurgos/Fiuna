#include<iostream>
using namespace std;
main(){
       int cambio[7]= {10000, 5000, 1000,500,100,50,10};
       int n,i, cont;
       cout<<"Introdusca el numero: ";
       cin>>n;
       cont=0;
       for(i=0; i<7;i++){
           if(n>=cambio[i])
              while(n>=cambio[i]){
                   n= n-cambio[i];
                   cont++;          
              }
              if(cont){
                cout<<"moneda:"<<cambio[i]<<"\t"<<cont<<endl;       
              }          
         cont=0;                          
       }          
       system("pause");
}
