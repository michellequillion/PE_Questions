#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to reverse a string;
string reverse (string s) 
{
	string rev = "";
	for (int k = s.length()-1; k>=0; k--)
			{
				rev += s.at(k);
			}
	return rev;
}

int main ()
{
	
	string str="";
	long largest=0;
	for (int i=100; i<=999; i++)
	{
		for (int j=100; j<=999; j++)
		{
			long product = i*j;
			str = to_string(product);
			string reversed = reverse(str);
			if (str.compare(reversed)==0) {
				long palindrome = product;
				if (palindrome> largest)
				{
					largest = palindrome;
				}
				// cout << i << " * " << j << "= " << reversed << endl;
				}
		}
	}
	cout << largest << endl;
}