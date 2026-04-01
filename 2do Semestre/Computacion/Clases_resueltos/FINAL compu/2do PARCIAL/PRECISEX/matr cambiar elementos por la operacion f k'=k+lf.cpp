/*EJERCICIO 1: Lea dos numeros enteros y positivos (validarlos) m y n,
que representan respectivamente el numero de filas y el numero de columnas
de una matriz mat de componentes reales.
Luego lea e imprima las mxn componentes de mat y tres numeros k, l, y f, los dos
primeros entero y positivos y menores o iguales que n, siendo l y k distintos
y el tercero un numero real no nulo.
Determine e imprima la matriz obtenida despues de sumar a la columna k la columna l
previamente multiplicado por f. k'=k+l*f */
#include<iostream>
using namespace std;
int entpos();
main()
{int m,n,i,j;
cout<<"\n\tDIGITE EL ORDEN DE LA MATRIZ M(mxn) :\n";
cout<<"\n\tNUMERO DE FILAS\n\tm = ";m=entpos();
cout<<"\n\tNUMERO DE COLUMNAS\n\tn = ";n=entpos();
//SE LEE LA MATRIZ
float M[m][n],k,l,f;
cout<<"\n\tDIGITE LAS COMPONENTES DE M("<<m<<"x"<<n<<") :\n";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{cout<<"\tM["<<i+1<<"]["<<j+1<<"] = ";cin>>M[i][j];}
//SE IMPRIME LA MATRIZ LEIDA
cout<<"\n\tM("<<m<<"x"<<n<<") :\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<M[i][j];
cout<<"\n";}
//SE LEE LOS NUMEROS k,l y f Y SE VALIDAN SEGUN LAS CONDICIONES DADAS
cout<<"\n\tDIGITE k,l y f\nTAL QUE k y l sean menores o iguales a "<<n<<"\n\tk = ";cin>>k;
while(k>n||k<=0||k!=int(k))
{cout<<"\tERROR. DIGITE NUEVAMENTE\tk = ";cin>>k;}
cout<<"\tl = ";cin>>l;
while(k==l||l<=0||l>n||l!=int(l))
{cout<<"\tERROR. DIGITE NUEVAMENTE\tl = ";cin>>l;}
cout<<"\tf = ";cin>>f;
while(f==0)
{cout<<"ERROR. NO PUEDE SER CERO\tf = ";cin>>f;}
//SE LE SUMA A LA COLUMNA k LA COLUMNA l POR f--->>>k+l*f
for(i=0;i<m;i++)
{M[i][int(k)-1]=M[i][int(k)-1]+f*(M[i][int(l)-1]);}
//SE IMPRIME LA MATRIZ RESULTANTE
cout<<"\n\tLA MATRIZ CAMBIADA ES :\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<M[i][j];
cout<<"\n";}
cout<<"\n\n\t";
system("pause");}
//FUNCION QUE VALIDA LOS NUMEROS ENTEROS Y POSITIVOS
int entpos()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tError. Vuelva a digitar (debe ser entero y positivo)\n\tnum = "; cin>>x;}
return int(x);}
