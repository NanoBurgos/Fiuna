#include<iostream>
using namespace std;
main(){
      int n, m, i,j;
      cout<<"ingrese la cantidad de filas:";
      cin>>n; 
      cout<<"ingrese la cantidad de columnas:";
      cin>>m; 
      int matriz[n][m+1];
    //  inicializo la matriz
     	for(i=0;i<n;i++)
		for(j=0;j<m+1;j++)
 	     matriz[i][j] = 0;
     // leemos la matriz
     
       for(i=0;i<n;i++){
		 for(j=0;j<m;j++){
          cout<<"mat["<<i<<"]["<<j<<"]:";
          cin>>matriz[i][j];cout<<"\n";                    
        } 
      }   
     //imprimimos la matriz               
     for(i=0;i<n;i++)
	 {
		for(j=0;j<m;j++)
			cout<<"\t"<<matriz[i][j];
		cout<<"\n";
	 }
     //Proceso  
     for(i=0;i<n;i++){
	    for (j=0;j<m;j++){
            matriz[i][m]+= matriz[i][j];
        }
     }
     cout<<"\n";
     //imprimimos la matriz
     for(i=0;i<n;i++)
	 {
		for(j=0;j<m+1;j++)
			cout<<"\t"<<matriz[i][j];
		cout<<"\n";
	 }     
 system("pause");	
}       
