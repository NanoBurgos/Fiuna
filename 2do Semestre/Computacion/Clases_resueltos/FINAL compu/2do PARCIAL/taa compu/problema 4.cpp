#include<iostream.h>
using namespace std;
float verif();
int main()
{int i,j,s=0;
float m,n,*p,*q;

cout<<"Sergio puto mete pues carajo la dimension de la fila de la puta matriz\n"; m=verif();
cout<<"Gerardo nde imbecil mete pues carajo la dimension de la columna de la puta matriz\n"; n=verif();

float M[int(m)][int(n)];
for(i=0;i<m;i++)
{for(j=0;j<n;j++)    
{cout<<"Seba chupa pene,mete la puta componente <"<<i+1<<","<<j+1<<">";
if(i==0 && j==0) { cin>>M[i][j];
p=&M[0][0];}
else
{cin>>M[i][j];
while( M[i][j-1]<=M[i][j] )
{cout<<"Las componentes deben de estaar en orden descendente sali travesti, diego homosexual..\n";
cin>>M[i][j];}
if( i==(m-1) && j==(n-1))
{q=&M[i][j];}}}}

cout<<"\nEL primer elemento es..\t"<<*p;
cout<<"\nEL ultimo elemento es..\t"<<*q;
s=*p+*q;

cout<<"\nLa suma de el primer y del ultimo elemento es..\t"<<s<<"\n\n\n";

system ("pause");}
     float verif()
    {float x;
    cin>>x;
    while(x!=int(x) || x<0)
    {cout<<"El numero debe ser entero y positivo";
    cin>>x;}
    return(x);
          }
