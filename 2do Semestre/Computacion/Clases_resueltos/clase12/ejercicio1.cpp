#include<iostream>
using namespace std;
int validar(void);
int verificar(int);
main(){
       int n, m, i,j;
       int primo;
       cout<<"Ingrese el primer valor para la matriz:";
       n = validar();
       cout<<"Ingrese el segundo valor para la matriz:";
       m = validar();
       int mat[n][m]; 
       int *ptr;
       ptr = &mat[0][0];
       
       for(i=0;i<n;i++){
         for(j=0;j<m;j++) {
           cout<<"mat["<<i<<"]["<<j<<"]:";
           cin>> *(ptr+j+i*n);                      
           }  
         } 
        for(i=0;i<n;i++){
         for(j=0;j<m;j++){
           primo = verificar(mat[i][j]);
           if (primo==0){
              mat[i][j] = 0;         
           }                         
          }
         }                  
        
       for(i=0;i<n;i++){
         for(j=0;j<m;j++) {
            cout<<"\t"<<*(ptr+j+i*n);            
         }
        cout<<"\n";
      }
      system("pause");                                             
}       
int verificar (int a){
    int primo=0;
    int i;
    for(i=2;i<a;i++){
        if(a%i==0){
         primo++;                             
    }
  }  
    return primo;                
}
int validar(void){
    float n;
    cin>> n;
    while(n!=int(n) or (n<2) or (n>19)){
      cout<<"El numero ingresado no es valido";
      cin>>n;              
    } 
    return int(n);               
}
