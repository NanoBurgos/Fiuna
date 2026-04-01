#include<iostream>
using namespace std;
main(){
       
   int *ptr, i;
   int vect[5];
   ptr = &vect[0]; // igual a ptr=vect[0] // igual ptr = &vect[0]
   for(i=0;i<5;i++){
       cout<<"(ptr+"<<i<<")";
       cin>>*(ptr+i);             
   } 
   for(i=0;i<5;i++){  //una forma de imprimir 
       cout<<"\t"<<*(ptr+i);             
   } 
   cout<<endl;      //otra forma de imprimir
      for(i=0;i<5;i++){
       cout<<"\t"<<vect[i];            
   }
   cout<<endl;     //otra forma de imprimir
   for(i=0;i<5;i++){
       cout<<"\t"<<*(vect+i);            
   }
   cout<<endl;
   int suma=0;      //suma de elementos
   for (i=0;i<5;i++){
     suma+= *(ptr+i);
    }    
   cout<<"La suma es:"<<suma<<endl;                      
   system("pause");
}
