#include<iostream>
using namespace std;
int contarpar(int *, int);
main(){
         int n, par, i;
         cout<<"Ingrese el tamaño del vector";
         cin>>n;
         int vect[n];
         for(i=0;i<n;i++){
            cout<<"vect["<<i<<"]";              
            cin>>vect[i];              
         }                 
         par = contarpar(vect, n);
         cout<<"La cantidad de pares rep";
         cout<<par;
         system("pause");
}
int contarpar(int *ptr, int n){
      int i, contar=0;      
      for(i=0;i<n;i++){
           if (*(ptr+i)%2==0){
              contar++;                
           }                                 
      }
      return contar;
}
