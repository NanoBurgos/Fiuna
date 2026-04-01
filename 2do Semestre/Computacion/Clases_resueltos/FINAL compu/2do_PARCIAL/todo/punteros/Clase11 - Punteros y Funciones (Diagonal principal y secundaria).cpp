#include<iostream>
using namespace std;
void cargarvector(float*,int);
void imprimirvector(float*,int);
void cargarmatriz(float*,int,int);
void imprimirmatriz(float*,int,int);
float sumadiagonal1(float*,int,int);
float sumadiagonal2(float*,int,int);
void valid(int*);
main()
{float*p;
 int n; valid(&n);
 float V[n],M[n][n];
 p=&V[0]; //alternativa p=V;
 cargarvector(p,n);
 imprimirvector(p,n);
 p=&M[0][0]; //alternativa p=M[0];
 cargarmatriz(p,n,n);
 imprimirmatriz(p,n,n);
 cout<<"La suma de la diagonal principal es: "<<sumadiagonal1(p,n,n)<<endl;
 cout<<"La suma de la diagonal secundaria es: "<<sumadiagonal2(p,n,n)<<endl;
 system("pause");
}
 
void valid(int*n)
{
 float x;
 do{cout<<"Ingrese un nro entero y positivo: ";
    cin>>x;}
 while(x!=int(x)||x<=0);
 *n=int(x);
}

void cargarvector(float*p,int n)
{
 int i;
 for(i=0;i<n;i++)
 {cout<<"v["<<i+1<<"]= ";
  cin>>*(p+i);} //alternativa cin>>p[i];
}
 
void imprimirvector(float*p,int n)
{
 int i;
 cout<<"V=[ "<<p[0];
 for(i=1;i<n;i++)
 {cout<<"  "<<p[i];}
 cout<<" ]"<<endl;
}

void cargarmatriz(float*p,int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {cout<<"M["<<i+1<<"]["<<j+1<<"]= ";
   cin>>*(p+i*n+j);} //alternativa cin>>p[i*n+j];
}

void imprimirmatriz(float*p,int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {
  cout<<"|\t";
  for(j=0;j<n;j++)
  {cout<<*(p+i*n+j)<<"\t";}
  cout<<endl;
 }
}
float sumadiagonal1(float*p,int m,int n)
{
 int i,j; float sum=0;
 for(i=0;i<m;i++)
 {
  j=i;
  sum=sum + *(p+i*n+j);
 }
 return sum;
}
float sumadiagonal2(float*p,int m,int n)
{
 int i,j=n-1; float sum=0;
 for(i=0;i<m;i++)
 {
  sum=sum + *(p+i*n+j);
  j--;
 }
 return sum;
}
