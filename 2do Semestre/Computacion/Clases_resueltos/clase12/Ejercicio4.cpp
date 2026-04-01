#include<iostream>
using namespace std;
int validacion(void);
main(){
       int m, n;// numero de filas y columnas
       int i,j,l;//variables para los for
       int c; //auxiliar
       cout<<"Ingrese los componentes de la matriz\n";
       cout<<"m=";
       m=validacion();
       cout<<"\nn=";
       n=validacion();
       int vec[m*n];
       int mat[m][n];
       cout<<"mat[1]:";cin>>vec[0];
       for(i=1;i<(m*n); i++){
           cout<<"mat["<<i+1<<"]:";
           cin>>vec[i];
           while(vec[i]<vec[i-1]){
           cout<<"mat["<<i+1<<"]:";
           cin>>vec[i];                       
           }                                    
       }
       l=0;
       for(i=0;i<m;i++){
          for(j=0;j<n;j++){
            mat[i][j]=vec[l];               
            l++;               
          }
       }  
       for(i=0;i<m;i++){
          for(j=0;j<n;j++){
            cout<<"\t"<<mat[i][j] ;         
          }
          cout<<"\n";
       }                             
   system("pause");
}
//funcion validacion
int validacion(void){
    float x;
    cin>>x;
    while(x!=(int)x || x<=2 || x>20){
    cout<<"\n\tDebe ser entero y positivo mayor a 2 y menor o igual  20";
    cin>>x;}
return ((int)x);
}
