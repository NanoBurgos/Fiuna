/* Punto Silla: Diseñar un programa en C/C++ que lea dos números enteros, positivos y menores que 100, m y n,
 y a continuación lea los mxn elementos de una matriz mat entera. El programa debe dar como salida la posición 
 que ocupa un punto silla de la matriz, o el mensaje "la matriz no tiene punto silla", según el caso. (un punto 
 silla de una matriz es un elemento que tiene la propiedad de ser a la vez el mayor de su fila y el menor de su columna). */
 
 #include<iostream>
 #include<stdio.h>
 #include<stdlib.h>
 using namespace std;
 main()
 { 
 	int i, j, m, n, silla;
 	cout<<"introduzca las dimensiones m y n de la matriz: \n"; cin>>m, cin>>n;
 	int mat[m][n];
 		for(i=0;i<m;i++)
 		{
 			for(j=0;j<n;j++)
 			{
 				cout<<"componente ["<<i+1<<"]["<<j+1<<"]: ";
 				cin>>mat[i][j];
 			}
 			
 		}
 		for(i=0;i<m;i++)
 		{
 			for(j=0;j<n;j++)
 			{
 				cout<<"\t"<<mat[i][j];		
 			}
 			cout<<endl;
 		}
 		
 		int maxfil[m];
 		int mincol[n];
 		
 		//maxfil[0]=0;
 		//mincol[0]=0;
 		//maxfil[0]=mat[0][0];
 		//mincol[0]=mat[0][0];
 		
		 // /*
		for(i=0;i<m;i++)
		{
			maxfil[i]=-999;
		}
		for(i=0;i<m;i++)
		{
			mincol[i]=999;
		}
		//	*/	
		for(i=0;i<m;i++)
 		{
 			for(j=0;j<n;j++)
 			{
 				if(mat[i][j]>=maxfil[i])
 				{
 					maxfil[i]=mat[i][j];
 				}
 				if(mat[i][j]<=mincol[j])
 				{
 					mincol[j]=mat[i][j];
 				}
			}
 		}
 		cout<<endl;
 		cout<<endl;
 		/* for(i=0;i<m;i++)
 		{ cout<<"\t"<<maxfil[i];
 		
		} cout<<endl;
		for(j=0;j<n;j++)
 		{
 			cout<<"\t"<<mincol[j];
		} cout<<endl;
			*/
			 
		silla=0;
		for(i=0;i<m;i++)
		{
		  for(j=0;i<n;j++)
		  {
		  		 
			 if(maxfil[i]==mincol[j])
 			{
 				silla++;
				cout<<"el punto silla esta en ["<<i<<"]["<<j<<"] "<<endl;
 			}
		  }
		}
		if(silla==0)
		{cout<<"no hay punto silla";
		}
 		
 	system("pause>null");
 	
 }
 /*  */
 
