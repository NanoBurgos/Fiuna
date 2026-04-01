#include<iostream>
using namespace std;
main(){
       float m,n;
       cout<<"Ingrese el primer numero ";
       cin>>m;
       while(m!=int(m)||m<=0){
       cout<<"El numero ingresado no es entero y positivo:";
       cin>>m;
       }
       cout<<"Ingrese el Segundo numero ";
       cin>>n;
       while(n!=int(n)||n<=0){
       cout<<"El numero ingresado no es entero y positivo :";
       cin>>n;
       } 
       // se convierte a entero los valores flotantes 
       int a = int(m);
       int b = int(n);
       int mat[a][b]; //definimos la matriz
       
       int i, j, l, k,;
       // inicializamos a cero la matriz
       for(i=0;i<a ; i++){
         for(j=0;j<b; j++){ 
            mat[i][j] = 0;          
         }
       } 
      int numero;
       //inGresamos los datos a la matriz
     // cout<<"mat["<<0<<"]["<<0<<"]:";cin>> mat[0][0]; cout<<"\n" ;
      for(i=0;i<a ; i++){
         for(j=0;j<b; j++){ 
            cout<<"ingrese el numero: ";cin>>numero;
            int z=0;
             while(z==0){                          
                for(l=0;l<a;l++){
                  for(k=0;k<b;k++){              
                    if(numero==mat[l][k]){
                       z++;
                    } 
                  }   
                } 
              if(z){
                 cout<<"ingrese el  numero:";cin>>numero;
                 z=0;         
              }else{
                 mat[i][j]= numero;
                 z++;  
              } 
            }                
             cout<<"mat["<<i<<"]["<<j<<"]:"<<mat[i][j]<<"\n";      
          }   
      }  
       //imprime la matriz                        
       for(i=0;i<a;i++){
            cout<<"\n" ;           
          for(j=0;j<b;j++){
             cout<<"\t"<<mat[i][j];                            
          }
       } 
     cout<<endl;                 
    system("pause");                   
}
       
    
