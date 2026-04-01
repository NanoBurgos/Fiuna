/*10-Lea e imprima dos numeros enteros y positivos m y n, mayores que 2,
 y menores o iguales que 20,carga la matriz mat de orden mxn con los
  restos de dividir el numero 100000 entre los primeros 
mxn numeros primos y luego imprime mat*/
#include<iostream>
using namespace std;
int validar()
{float x;
cin>>x;
while(x!=int(x)||x<=2||x>20)
{cout<<"\n\n\tVUELVA A DIGITAR (x==int(x),2<x<=20) :\n\tx = "; cin>>x;}
return int(x);}
int primo();
main()
{int i,j,m,n;
cout<<"\n\tDIGITE EL ORDEN DE LA MATRIZ A(mxn):\n\n\tNUMERO DE FILAS\n\tm = ";m=validar();
cout<<"\n\tDIGITE EL NUMERO DE COLUMNAS\n\tn = ";n=validar();
float A[m][n],aux;
//SE CARGA LA MATRIZ
cout<<"\n\tDIGITE LOS ELEMENTOS DE A:\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"\n\tA["<<i+1<<"]["<<j+1<<"] = ";
A[i][j]=1000000%primo();}}
//SE IMPRIME LA MATRIZ
cout<<"\n\nMATRIZ A:\n\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<A[i][j];
cout<<"\n\n";}
cout<<"\n\n\t\t";
system("pause");}
//FUNCION QUE PERMITE VALIDAR LOS NUMEROS PRIMOS
int primo()
{int i,c=0;float x;cin>>x;//DECLARACION DE VARIABLES, c es contador
for(i=1;i<=x;i++)//CUENTA DESDE 1 HASTA X
{if(int(x)%i==0)c++;}//SI X ES DIVISIBLE POR i, CONTADOR SUMARA 1
//SI EL CONTADOR ES IGUAL A 2, EL NUMERO ES PRIMO, POR QUE INDICARA QUE TIENE SOLAMENTE 2 DIVISORES
{while(c>2||x!=int(x)||x<=0)
//MIENTRAS C SEA DISTINTO DE 2, X NO SEA ENTERO Y X SEA NEGATIVO SE REPETIRA EL CICLO
{cout<<"\n\tVUELVA A DIGITAR (debe ser primo)\n\tx = ";
cin>>x;
c=0;//SE IGUALA A 0 PARA EMPEZAR EL CONTEO
//SE INICIA NUEVAMENTE EL CICLO DE COMPROBACION
for(i=1;i<=x;i++)
{if(int(x)%i==0)c++;}
if(x==1) c=2;}}
return int(x);}
