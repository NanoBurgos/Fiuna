#include<iostream>
#include<time.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int validacion ();
int main ()
{ int i, n, k, j;
  int v[n], contpar=0, contimpar=0, par[n],impar[n],temp=0;
  
  n= validacion();
  
  cout<<"\n\tLAS COMPONENTES DEL VECTOR v son: ";
 
  for(i=0 ; i<n ; i++)
  {   v[i] = rand()%1001;}   
     
     cout<<"\n\tv = [";
     for(i=0 ; i<n ; i++)
     {cout<<"  "<<v[i];}
     cout<<"]";      

cout<<"mis coordenadas pares son:\t";

for (i=0; i<n ;i++)
    {if(v[i]%2==0)
    {par[contpar]=v[i];
    contpar++;}}

for (i=0; i<contpar;i++)
{cout<<"\t"<<par[i];}
cout<<" ]\n";
    
cout<<"mis coordenadas impares son:\t";

for (k=0; k<n ;k++)
    {if(v[k]%2==0)
    {impar[contimpar]=v[k];
    contimpar++;}}

for (i=0; i<contimpar;i++)
{cout<<"\t"<<impar[i];}
cout<<" ]\n";

for (i=0; i<contimpar-1; i++){
    for (j=0 ; j<contimpar-1; j++){
    if (impar[j]>impar[j+1];)
	{
        temp=impar[j];
        impar[j]=impar[j+1];
        impar[j+1]=temp;
        }}}

for (i=0; i<contpar-1; i++){
    for (j=0 ; j<contpar-1; j++){
    if (par[j]>par[j+1];){
        temp=par[j];
        par[j]=par[j+1];
        par[j+1]=temp;
        }}}
        
 cout<<"V =[ ";
 for(i=0; i<contimpar;i++){
          cout<<impar[i]<<"  ";}
          
 for(i=0; i<contpar; i++){
          cout<<par[i]<<"   ";}
                 
system ("pause");
}

int validacion()
{ float x;

do {cout<<"introduzca un nro mayor a 2 y menor o igual a 50 =\t"; cin>>x;} while(x<2 or x>50 or x!=int(x));

return int(x);    

