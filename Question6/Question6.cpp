#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()
{
	int n = 100; //first 100 natural numbers
	int soq = (n*(n+1)*(2*n+1))/6; // sum of squares formula
	int sum = n*(n+1)/2; // sum of first 'n' terms formula
	int sqsum = pow (sum, 2); // square of the sums
	// difference between sum of squares and square of sums
	int difference = (sqsum - soq); 
	cout << difference << endl;

	return 0;
}
