#include<iostream.h>
using namespace std;
float verif();
int main()
{int i,j,s=0;
float m,n,*p;

cout<<"Mete pues carajo la dimension de la fila de la puta matriz\n"; m=verif();
cout<<"Mete pues carajo la dimension de la columna de la puta matriz\n"; n=verif();
    
    float M[int(m)][int(n)];
for(i=0;i<m;i++)
{for(j=0;j<n;j++)   
{cout<<"Mete las componentes de la fucking matriz <"<<i+1<<","<<j+1<<">";
if( i==0 && j==0 ) {cin>>M[i][j];}

else
{cin>>M[i][j];
  while( M[i][(j-1)]>=M[i][j])
{cout<<"Las putas componentes deben de estar en orden ascendente  \n";
cin>>M[i][j];}}
if(i==j)
{p=&M[i][j];
s=s+*p;}
}}



for(i=0;i<m;i++)
{for(j=0;j<n;j++) 
{if(j==0) {cout<<"|";}
cout<<M[i][j]<<" ";
if(j==(n-1)) {cout<<"|\n";}}}
  
  if(m==n)
  {cout<<"\nLa traza de la puta matriz es\t"<<s<<"\n\n\n";  }
  else
  {cout<<"\nLa matriz debe ser cuadrada para que tenga una traza..\n\n";}
    system("pause");
    }
    
     float verif()
    {float x;
    cin>>x;
    while(x!=int(x) || x<0)
    {cout<<"El numero debe ser entero y positivo";
    cin>>x;}
    return(x);
          }
