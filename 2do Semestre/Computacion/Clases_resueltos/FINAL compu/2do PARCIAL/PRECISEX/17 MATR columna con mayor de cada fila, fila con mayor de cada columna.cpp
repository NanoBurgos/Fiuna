/*17 Lea dos numeros , m y n, mayores que uno, luego cargue una matriz de orden mxn.
Luego agregue a dicha matriz una fila que contenga la menor componente de cada columna
y una columna que contenga la mayor componente de cada fila. Luego imprima la matriz ampliada.*/
#include<iostream>
using namespace std;
int validar();
main()
{int m,n,i,j;
cout<<"\n\n\tDIGITE LAS DIMENSIONDES DE M(mxn) (m Y n deben ser mayor que 1) :\n";
cout<<"\n\tNUMERO DE FILAS, m = ";m=validar();
cout<<"\n\tNUMERO DE COLUMNAS, n = ";n=validar();
//SE LEE LA MATRIZ ALEATORIA
float M[m+1][n+1],mayor,menor;
cout<<"\n\tDIGITE LAS COMPONENTES DE LA MATRIZ M("<<m<<"x"<<n<<") :\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"\n\tM["<<i+1<<"]["<<j+1<<"] = ";cin>>M[i][j];}}
//SE IMPRIME LA MATRIZ CARGADA
cout<<"\n\tLA MATRIZ M("<<m<<"x"<<n<<") ES :\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<M[i][j];
cout<<"\n";}
//SE AGREGAN LA COLUMNA DE MAYORES
for(i=0;i<m;i++)
{mayor=M[i][0];
for(j=0;j<n;j++)
{if(mayor<M[i][j]) 
mayor=M[i][j];
M[i][n]=mayor;}}
//SE AGREGA LA FILA DE MENORES
for(j=0;j<n;j++)
{menor=M[0][j];
for(i=0;i<m;i++)
{if(menor>M[i][j]) menor=M[i][j];M[m][j]=menor;}}
M[m][n]=0;
//SE IMPRIME LA MATRIZ CON LA FILA Y LA COLUMNA AGREGADA
cout<<"\n\tLA MATRIZ AMPLIADA DE M("<<m<<"x"<<n<<") ES :\n";
for(i=0;i<m+1;i++)
{for(j=0;j<n+1;j++)
cout<<"\t"<<M[i][j];
cout<<"\n";}
system("pause");}
//FUNCION QUE VALIDA LOS NUMEROS ENTEROS MAYORES QUE 1
int validar()
{float x;cin>>x;
while(x!=int(x)||x<=1)
{cout<<"\n\tVUELVA A DIGITAR EL NUMERO\n\tnumero = ";cin>>x;}
return int(x);}
