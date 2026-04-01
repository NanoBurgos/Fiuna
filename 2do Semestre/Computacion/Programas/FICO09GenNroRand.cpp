#include<iostream>
using namespace std;
int main()
{	int i, n, max = 100;
	cout << "\nDigite cuantos numero se generaran ";
	cin >> n;
	srand( time( NULL ) );
	for ( i = 0; i < n; i++ )
		 cout << "\t" << rand()%max + 1;
   cout << "\n";
   system ( "pause" );
}
