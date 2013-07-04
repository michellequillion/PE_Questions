#include <iostream>
using namespace std;

//function to check if the number is evenly divisible by all numbers from 1-20
bool check (long num)
{
	for (int i=1; i<=20; i++)
	{
		if (num%i != 0)
			return false;
	}
	return true;
}

int main ()
{
	long number = 1;
	bool result;
	//loop through all numbers until you get one that is evenly divisible by numbers 1-20
	do {
		result = check(number);
		number++;
	} while (result==false);
	cout << number << endl;
}
