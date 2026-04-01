/* Ingrese una matriz de orden m x n. I mprimir la matriz. Ordenar los elementos en
forma ascendente de la mitad superior de la matriz, y en forma descendente de la mitad
onferior. Si el número de filas es impar la fila del medio de la matriz no se ordena (se
imprime tal como se cargó) */
#include<iostream>
using namespace std;
int main ()
{
 float m, n, *p, aux; int i, j, a, b, lugar;
 cout<<"introduzca el numero de filas m de una matriz: "; cin>>m;
 while(m<=0||m!=int(m))
 {	   cout<<"\nRecuerde que el numero de filas debe ser entero y positivo";
	   cout<<"\nVuelva a introducir el numero de filas: "; cin>>m; }
 cout<<"introduzca el numero de columnas n de una matriz: "; cin>>n;
 while(n<=0||n!=int(n))
 {	   cout<<"\nRecuerde que el numero de columnas debe ser entero y positivo";
	   cout<<"\nVuelva a introducir el numero de columnas: "; cin>>n; }
 float mat[int(m)][int(n)];
 for(i=0;i<m;i++)
 { 	for(j=0;j<n;j++)
 	{cout<<"\nIntroduzca el elemento ["<<i<<"]["<<j<<"]: "; cin>>mat[i][j];}
 }
 
 	// imprimir la matriz A
	 for(i=0;i<m;i++)
	 {                 cout<<"\n";
	  				 for(j=0;j<n;j++){ cout<<"\t"<<mat[i][j]<<"  "; }
					   cout<<"\n";
     }
 	// ordenamiento de la parte superior de la matriz
	p=&mat[0][0];
 	if(int(m)%2==0)
 	{a=int(m)/2; b=a;}
 	else
 	{a=(int(m)-1)/2;  b=a+1;}
 	for(i=0;i<a*n;i++)
 	{
  	 				  aux=*(p+i); lugar=i;
	 				for(j=i;j<a*n;j++)
	 				{
					 				if(*(p+j)<aux)
					 				{  aux=*(p+j); lugar=j;}
		            }
		            *(p+lugar)=*(p+i);  *(p+i)=aux; 
    }
 	// ordenamiento de la parte inferio de la matriz
 	for(i=b*int(n);i<m*n;i++)
 	{
  	 				  aux=*(p+i); lugar=i;
	 				for(j=i;j<m*n;j++)
	 				{
					 				if(*(p+j)>aux){  aux=*(p+j); lugar=j;}
		            }
		            *(p+lugar)=*(p+i);  *(p+i)=aux; 
    } 	
 	// impresion de la matriz ordenada
 	cout<<"\n\nLa matriz ordenada es\n";
 	for(i=0;i<m;i++)
	 {                 cout<<"\n";
	  				 for(j=0;j<n;j++){ cout<<"\t"<<mat[i][j]<<"  "; }
					   cout<<"\n";
     }
 	system ("pause");
}
