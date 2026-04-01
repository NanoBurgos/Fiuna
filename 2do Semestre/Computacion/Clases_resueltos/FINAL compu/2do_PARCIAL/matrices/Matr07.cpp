/* Matr07 Elaborar un programa en lenguaje C que,
Permita leer una matriz de orden mxn y obtener,
a) el número de componentes positivas, negativas y nulas que tiene, y,
b) la suma de las componentes positivas y de las negativas.*/
#include<iostream>
using namespace std;
int natural ();
main()
{int i,j,n,m,nulos=0,pos=0,neg=0;
cout<<"\n\tINTRODUZCA EL VALOR DEL ORDEN PARA LA MATRIZ M(mxn):\n";
cout<<"\n\tNUMERO DE FILAS\n\tm = ";m=natural();
cout<<"\n\tNUMERO DE COLUMNAS\n\tn = ";n=natural();
//se lee la matriz, se suma y se cuenta
float M[m][n],suma_p=0,suma_n=0;
cout<<"\n\tINTRODUZCA LOS ELEMENTOS DE M:\n\n";
for(i=0;i<m;i++)
    {for (j=0;j<n;j++)
    {cout<<"\n\tM["<<i+1<<"]["<<j+1<<"]=";cin>>M[i][j];
    if (M[i][j]>0){suma_p+=M[i][j];pos++;}
    if (M[i][j]<0){suma_n+=M[i][j];neg++;}
    if (M[i][j]==0) nulos++;}}
//Se imprime la matriz y los resultados
cout<<"\n\tMatriz M:\n\n";
for(i=0;i<m;i++)
    {cout<<"\t|";
    for (j=0;j<n;j++)
    cout<<"\t"<<M[i][j];
    cout<<"\t|\n";}
cout<<"\n\tCantidad de Numeros Positivos : "<<pos<<". Suma de Numeros Positivos: "<<suma_p;
cout<<"\n\tCantidad de Numeros Negativos : "<<neg<<". Suma de Numeros Positivos: "<<suma_n;
cout<<"\n\tCantidad de Numeros Nulos : "<<nulos<<".\n\n\t";
system("pause");}
//funcion que valida a numeros enteros y positivos
int natural ()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO (debe ser entero y positivo)\n\tnumero : ";cin>>x;}
return int(x);}
