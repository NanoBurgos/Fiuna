#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

main()
{
	
	int m,n,i,j;
	float d;
	cout<<"intruzca la dimension m y n \n";
	cin>> m; cin>>n;
	float mat[m][n]; // int para para que almacene enteros
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"intruzca la componente ["<<i<<"]["<<j<<"]: ";
			 //if(j==0)
			//{
				d=5/10;
			 mat[i][j]= d;
			//}
			//else
			//{
				
			//mat[i][j]=d;
			//}
			 
			 
			cout<<mat[i][j]<<endl;
		}
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<mat[i][j];
		} cout<<endl;
	}
	 
	
	
	
	system("pause>null");
}
