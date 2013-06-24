#include <iostream>
using namespace std;
int total=0;

int fib (int n) 
{

	if (n<=1)
	{
		return 1;
	}

	else 
	{
		return fib (n-1) + fib (n-2);
	}
}

int main ()
{
	for (int i=1; fib(i)<4000000; i++)
	{
		if (fib(i)%2==0)
		{
			total+=fib (i);
		}
	}

	cout << total << endl;
	return 0;
}

