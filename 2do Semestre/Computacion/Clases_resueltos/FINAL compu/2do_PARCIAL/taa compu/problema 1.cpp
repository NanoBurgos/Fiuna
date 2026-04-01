#include<iostream.h>
using namespace std;
float verif();
int main()
{ int i,j;
float m,n,k,l,f;

cout<<"Mete pues carajo la dimension de la fila de la puta matriz\n"; m=verif();
cout<<"Mete pues carajo la dimension de la columna de la puta matriz\n"; n=verif();
    
cout<<"Mete el valor de k..\n";
cin>>k;
while( k!=int(k) || k<0 || k>n )
{cout<<"El numero debe estar en el intervalo pedido\n";
cin>>k;}

if( k==0 )
{cout<<"Mete el valor de l carajo\n";
cin>>l;
while(l!=int(l) || l<0 || l==0 || l>n)
{cout<<"El numero debe estar en el intervalo pedido\n";
cin>>l;}}

if(k!=0)
{cout<<"Mete el valor de l carajo\n";
cin>>l;
while(l!=int(l) || l<0 || l>n)
{cout<<"El numero debe estar en el intervalo pedido\n";
cin>>l;}}

cout<<"Ahora el valor de f indio..\n";
cin>>f;
while(f!=int(f) || f<0 || f>n)
{cout<<"El numero debe estar en el intervalo pedido\n";
cin>>f;}



float M[int(m)][int(n)];
for(i=0;i<m;i++)
{for(j=0;j<n;j++)   
{cout<<"Mete las componentes de la fucking matriz <"<<i+1<<","<<j+1<<">";
cin>>M[i][j];}}

for(i=0;i<m;i++)
{for(j=0;j<n;j++) 
{if(j==0) {cout<<"|";}
cout<<M[i][j]<<" ";
if(j==(n-1)) {cout<<"|\n";}}}

float v[int(m)];
for(i=0;i<m;i++)
{for(j=0;j<n;j++) 
{ if(j==k) {v[i]=M[i][j];}}}

cout<<"\nvector v[m]\n";
for(i=0;i<m;i++)
{cout<<v[i]<<"\n";}

 float w[int(m)];
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
 { if(j==l) {w[i]=M[i][j];}}} 
 

cout<<"\nvector w[m]\n";
for(i=0;i<m;i++)
{cout<<w[i]<<"\n";} 
 
 float h[int(m)];
 for(i=0;i<m;i++)
 {h[i]=w[i]*f+v[i];}
 
 cout<<"vector h[m]\n";
 for(i=0;i<m;i++)
 {cout<<h[i]<<"\n";}
 
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
 { if(j==k) { M[i][j]=h[i];}}}
 
 for(i=0;i<m;i++)
{for(j=0;j<n;j++) 
{if(j==0) {cout<<"|";}
cout<<M[i][j]<<" ";
if(j==(n-1)) {cout<<"|\n";}}}

 
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
    
