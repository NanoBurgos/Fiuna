/* Cargue una matriz de 5x5 con los 25 primeros numeros de la serie de Fibonacci
(la sucesión coimenza con los numeros 0 y 1, y a partir de estos, cada término de
la suma de ls dos anteriores, genere los números de Fibonacci utilizando una función
recursiva), imprima esta matriz utilizando una función por puntero. */
#include<iostream>
using namespace std;
void imprimir(int *a);
int main()
{
 	int mat[5][5], *p;   int i, j; 	
 	p=&mat[0][0]; 	
 	*(p+0)=0;  *(p+1)=1; 	
 	for(i=2;i<25;i++)
 	{	 *(p+i)=*(p+i-1)+*(p+i-2);	 }
 	imprimir(&mat[0][0]);
system ("pause");
}
void imprimir( int *a)
{
 	 int i, j, x=0;
 	 for(i=0;i<5;i++)
 	 {
	  				 for(j=0;j<5;j++) {cout<<"\t"<<*(a+x)<<"\t"; x++; } cout<<"\n\n";
     }
}
