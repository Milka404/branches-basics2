#include <iostream>
#include <math.h>
using namespace std;

main ()
{
	int a, b=5;
	for(int i=0; i<b; i++)
	{
		 a+=i*b;
		 a=i+b;
		 a++;
	}
	
	cout << "Summa "<< a << endl;
}