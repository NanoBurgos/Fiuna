//El metodo de las seleccion
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
int posmin( int n, int j, int  vect[]);
int lect( char msg[]);
int main()
{
    int n,i,j,min,max,aux,a=0 ;
    n=lect("\n\tDigite un numero entero y positivo\nn=");
    srand(time(0)); int vect[n];
    for(i=0;i<n;i++) vect[i]=rand()%101;
    cout <<"\n\n\t\tEl vector es= \n\n\t{";
    for(i=0;i<n;i++)
      cout << vect[i]<< " ";
    cout <<" }";
    // metodo
       for(j=0;j<n;j++)
      {     
              a=posmenor( n ,j, vect); 
              aux=vect[j]; vect[j]=vect[a]; vect[a]=aux; 
        
                
      } 
      
      
    //impresion 
    cout <<"\n\n\t\tEl vector ordenado es=\n\n\t{";
      for(i=0;i<n;i++)
        cout << vect[i]<< " ";  
    cout<<" }\n\n" ;    
    system("pause"); return  main();
}
int lect(char msg[])
{
    float n; 
    cout << msg ;cin >> n;
    while(n<=0 || n!=int (n)) 
    { cout <<"\n Deber ser entero y positivo\n\tn= "; cin >> n;}
    return int (n);
}   
int posmenor( int n,int j, int  vect[])
{
    int i,a=j,min=vect[j];
    for(i=j;i<n;i++)
    if(vect[i]<min)
    {
      min=vect[i]; a=i;
    }
    return a;
}


    


    
