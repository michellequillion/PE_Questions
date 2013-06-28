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
			//get product of the two three digit numbers
			long product = i*j;
			//convert product to string
			str = to_string(product);
			//reverse the string
			string reversed = reverse(str);
			//if the string and its reverse are equal we have a palindrome
			if (str.compare(reversed)==0) {
				long palindrome = product;
				//determine if this is currently the largest palindrome number
				if (palindrome> largest)
				{
					largest = palindrome;
				}
			}
		}
	}
	cout << largest << endl; // print largest palindrome
}