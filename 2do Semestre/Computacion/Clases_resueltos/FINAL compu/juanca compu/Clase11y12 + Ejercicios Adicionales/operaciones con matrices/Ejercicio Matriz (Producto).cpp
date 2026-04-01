/*Cargue dos matrices de orden mxn y pxq. Luego calcule si es posible,
 la suma, la resta y/o el producto de dichas matrices. 
 Luego imprima en pantalla el resultado.*/
#include<iostream>
using namespace std;
int entpos(void);
int main()
{int i,j,k,m=entpos(),n=entpos(),p=entpos(),q=entpos();
 float A[m][n],B[p][q],Sum[m][n],Res[m][n],Prod[m][q],Prod2[p][n];
 //Cargamos la matriz A
 cout<<"\nIngrese los elementos de la matriz A "<<m<<"x"<<n<<"\n";
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
  {cout<<"A["<<i+1<<"]["<<j+1<<"]= ";
   cin>>A[i][j];}}
 cout<<"La matriz A es\n";
  for(i=0;i<m;i++)
  {for(j=0;j<n;j++)
   cout<<" \t"<<A[i][j];cout<<"\n";}
 //Cargamos la matriz B
 cout<<"\nIngrese los elementos de la matriz B "<<p<<"x"<<q<<"\n";
 for(i=0;i<p;i++)
 {for(j=0;j<q;j++)
  {cout<<"B["<<i+1<<"]["<<j+1<<"]= ";
   cin>>B[i][j];}}
 cout<<"La matriz B es\n";
  for(i=0;i<p;i++)
  {for(j=0;j<q;j++)
   cout<<" \t"<<B[i][j];cout<<"\n";}
 //Verificamos si se puede realizar la suma y la resta
 if(m==p && n==q)
 {for(i=0;i<m;i++)
  {for(j=0;j<n;j++)
   {Sum[i][j]=A[i][j]+B[i][j];
    Res[i][j]=A[i][j]-B[i][j];}}
 //Imprimimos los resultados
  cout<<"La suma es\n";
  for(i=0;i<m;i++)
  {for(j=0;j<n;j++)
   cout<<" \t"<<Sum[i][j];cout<<"\n";}
  cout<<"La resta es\n";
  for(i=0;i<m;i++)
  {for(j=0;j<n;j++)
   cout<<" \t"<<Res[i][j];cout<<"\n";}}
 //Verificamos si se puede realizar el producto
 if(n==p)
 {for(i=0;i<m;i++)
  {for(j=0;j<q;j++)
   {Prod[i][j]=0;
    for(k=0;k<p;k++)
     Prod[i][j]=Prod[i][j]+A[i][k]*B[k][j];}}}
 //Imprimimos el resultado
  cout<<"\nLa multiplicacion es\n";
  for(i=0;i<m;i++)
  {for(j=0;j<q;j++)
   cout<<" \t"<<Prod[i][j];cout<<"\n";}
  cout<<"\n";
  if(q==m)
 {for(i=0;i<p;i++)
  {for(j=0;j<n;j++)
   {Prod2[i][j]=0;
    for(k=0;k<q;k++)
     Prod2[i][j]=Prod2[i][j]+B[i][k]*A[k][j];}}}
 //Imprimimos el resultado
  cout<<"\nLa multiplicacion es\n";
  for(i=0;i<m;i++)
  {for(j=0;j<q;j++)
   cout<<" \t"<<Prod2[i][j];cout<<"\n";}
  cout<<"\n";
 system("pause");}

int entpos(void)
{float n;
 cout<<"Ingrese un numero entero y positivo: ";
 cin>>n;
 while(n!=(int)n||n<1)
 {cout<<"Introduzca de nuevo: "; cin>>n;}
 return (int)n;}
