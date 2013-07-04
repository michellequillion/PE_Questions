#include <iostream>
using namespace std;

//function to check if the number is evenly divisible by all numbers from 1-20
bool check (int num)
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
	int number = 1;
	bool result;
	//loop through all numbers until you get one that is evenly divisible by numbers 1-20
	do {
		result = check(number);
		number+=19;
	} while (result==false);
	cout << number << endl;
}
