/* ingrese la dimension de las filas m y columnas n de una matriz, generaruna matriz
de orden mxn ordenada en forma de "caracol"*/
#include<iostream>
using namespace std;
int main ()
{
	float m, n;
	int x, y, a=0, b=1, M, N, j, k, l, aux;
	cout<<"Introduzca la dimension m de las filas de una matriz"; cin>>m;
	while(m!=int(m)||m<1)
	{	cout<<"La dimension debe ser entera y positiva\n";
		cout<<"Introduzca la dimension m de las filas de una matriz"; cin>>m;	}
	cout<<"Introduzca la dimension n de las columnas de una matriz"; cin>>n;
	while(n!=int(n)||n<1)
	{	cout<<"La dimension debe ser entera y positiva\n";
		cout<<"Introduzca la dimension n de las columnas de una matriz"; cin>>n; }
	int mat[int(m)][int(n)];
	M=int(m); N=int(n);	
	k=M;				if(M%2!=0) k=M+1;					k=k/2;
	l=N;				if(N%2!=0) l=N+1;					l=l/2;
	aux=k;					if(l<k)aux=l;
	for(j=0;j<aux;j++)
	{
	// fila constante columna variable
	if(N-a>0)
	{	x=a;
		for( y=a ; y<N ; y++)
		{	mat[x][y]=b;	b=b+1;	}	}
	// cloumna constante fila vaiable
	if(M-a>0)
	{	y=N-1;
		for( x=a+1; x<M ; x++ )
		{	mat[x][y]=b;	b=b+1;	}	}
	// fila constante columna variable
	if(M-a>1)
	{	x=M-1;
		for( y=N-2 ; y>=a ; y--)
		{	mat[x][y]=b;	b=b+1;	}	}
	// cloumna constante fila vaiable
	if(N-a>1)
	{	y=a;
		for( x=M-2; x>a ; x--)
		{	mat[x][y]=b;	b=b+1;	}	}
	// ajuste de parametros
	if(a<l)++a; if(M>k)--M; if(N>l)--N;
	}
	for ( x=0 ; x<m ; x++)
	{   cout<<"\n\t";
		for ( y=0 ; y<n ; y++ )
		{  if(mat[x][y]<100)cout<<" ";  if(mat[x][y]<10)cout<<" ";	cout<<mat[x][y]<<"   ";	}
		cout<<"\n\n";	}
	system ("pause");
}
