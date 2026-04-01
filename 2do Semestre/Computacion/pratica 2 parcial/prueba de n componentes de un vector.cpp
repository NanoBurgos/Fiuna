#include<iostream>
using namespace std;
main(){
	int a,i;
	cout<<"introduzca el numero de componetes del vector	"; cin>>a;
	cout<<"introduza los componetes del vector de "<< a<< " elementos\n";
	int vect[a];
	for(i=0;i<a;i++)
	{
		cout<<"vect["<<i+1<<"]	";
		cin>>vect[i];
	}
}
