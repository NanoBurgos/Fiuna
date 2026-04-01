#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float n,t=0,s=0;
int i,j,x;
do{
	cout<<"Introduzca un Númrto entero y positivo: ";
	cin>>n;
}while(int(n)!=n||n<=0);
int mat[int(n)][int(n)];
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<"Introduzca mat["<<i+1<<"]["<<j+1<<"]: ";
		cin>>x;
		mat[i][j]=x;
		if((i+j)%2==0)
		{s=s+x;}
		else
		{t=t+x;}
	}
}
	for(i=0;i<n;i++)
	{
		cout<<"\t";
		for(j=0;j<n;j++)
		{
			cout<< mat[i][j] <<" ";
		}
		cout<<endl;
	}
	cout<<"El numero entero y positivo introducido por teclado es: "<<n<<"\n";
	cout<<"La suma de los elementos cuyos indices suman un numero par es: "<<s<<"\n";
	cout<<"La suma de los elementos cuyos indices suman un numero impar es: "<<t;
	system("pause"); return 0;
}
	
