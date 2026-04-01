#include<iostream>
using namespace std;
main()
{
	int n,i,j,c=0,d;
	cout<<"introduzca un numero entero: ";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					c++;
				}
				
			}100111
	    }	
		if(c==0)
		{
			d=n;
			while(d%i==0)
			{
				cout<<i<<"*";
				d=d/i;
			}
		}
		else
		{
			c=0;
		}
	}
}
