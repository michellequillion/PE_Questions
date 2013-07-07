#include <iostream>
using namespace std;

bool isPrime ( long number)
{
	if (number==2)
		return true;
	else if (number<2)
		return false;
	for (long i=2; i<number; i++)
	{
		if (number%i==0)
			return false;
	}
	return true;
}

int main ()
{
	long num=0;

	num=600851475143;
	long biggest=0;
	for (long i=2; i<=num; i++)
	{
		if (num%i==0)
		{
			int prime = isPrime(i);
			if (prime==1)
			{
				if (i>biggest)
					biggest=i;
			}
		}
	}
	cout << biggest;

	return 0;
}