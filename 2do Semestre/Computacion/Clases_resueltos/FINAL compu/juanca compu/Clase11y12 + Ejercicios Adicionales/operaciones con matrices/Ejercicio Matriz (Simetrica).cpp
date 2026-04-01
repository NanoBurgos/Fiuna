/*Cargue una matriz de nxn, determine si es una matriz 
simétrica o anti simétrica, luego imprima en pantalla 
la transpuesta de dicha matriz.*/
#include<iostream>
using namespace std;
int entpos(void);
int main()
{int i,j,n=entpos(),ban=0;
 float A[n][n],T[n][n];
 cout<<"Ingrese los elementos de la matriz cuadrada de orden "<<n<<"x"<<n<<"\n";
 //las variables i,j son utilizadas para definir cada elemento Aij de la matriz A
 //para cargar la matriz por filas mientras el indice i no varia se hace variar j
 for(i=0;i<n;i++)//el for de la variable i corresponde a las filas
 {for(j=0;j<n;j++)//el for de la variable j corresponde a las columnas
  {cout<<"A["<<i+1<<"]["<<j+1<<"]= ";
   cin>>A[i][j];}
  cout<<"\n";}
  cout<<"\nLa matriz ingresada es:\n\n";
 for(i=0;i<n;i++)
 {cout<<"|\t";
  for(j=0;j<n;j++) 
  {cout<<A[i][j]<<"\t";}
  cout<<"|\n";}
 //la logica consiste en ir descartando las diferentes posibilidades
 //primero se descarta que sea simetrica
 for(i=0;i<n;i++)
  for(j=0;j<n;j++) 
   if(A[i][j]!=A[j][i])//aqui verificamos que no sea simetrica
   {ban=1;break;}//si ban=1 entonces la matriz no es simetrica
 //si no es simetrica
 if(ban==1)
 for(i=0;i<n;i++)
  for(j=0;j<n;j++) 
   if(A[i][j]!=-A[j][i])
   {ban=2;break;}//si ban=2 entonces la matriz no es anti-simetrica
   
 if(ban==0)cout<<"\nLa matriz es simetrica";
 else if(ban==1)cout<<"\nLa matriz es anti-simetrica";
 else cout<<"\nLa matriz no es simetrica ni anti-simetrica";
 
 cout<<"\nSu transpuesta es:\n\n";
 for(i=0;i<n;i++)
 {cout<<"|\t";
  for(j=0;j<n;j++) 
  {T[i][j]=A[j][i];//definicion de matriz transpuesta
   cout<<T[i][j]<<"\t";}
  cout<<"|\n";}
 cout<<"\n\n";
 system("pause");}

int entpos(void)
{float n;
 cout<<"Ingrese un numero entero y positivo: ";
 cin>>n;
 while(n!=(int)n||n<1)
 {cout<<"Introduzca de nuevo: "; cin>>n;}
 return (int)n;}
