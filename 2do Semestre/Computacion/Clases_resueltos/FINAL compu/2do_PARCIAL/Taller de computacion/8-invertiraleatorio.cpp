#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
 int n,ninv,a;
 srand(time(NULL));
 n=100000+rand()%(1000000-100000);
 cout<<"el numero generado aleatoriamente es "<<n<<endl;
 cout<<"el numero invertido es ";
 for(int i=1;i<=6;i++)
 {a=n%10;n=n/10;
 cout<<a;
}
cout<<endl;

 system("pause");
 return 0;
}
