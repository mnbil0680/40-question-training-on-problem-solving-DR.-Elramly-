#include <bits/stdc++.h>
using namespace std;
int g_c_d(int a, int b)
{
	if (a <= 0 || b <= 0) // a parameter is not positive
		return 0; // exit and return the error sentinel
	int remainder = a % b; // Get remainder when a is divided by b.
	while (remainder != 0)
	{
		a = b;
		b = remainder;
		remainder = a % b;
	}
	return b; // Return the divisor that produced a remainder of 0.
}

int reduce(int& num, int& denom)
{
	if (num <= 0 || denom <= 0)
		return 0; // mistake we must change 1 ==> 0 
	else
	{
		int common = g_c_d(num, denom);
		num /= common; // num  = num / gcd
		denom /= common;// denom  = denom / gcd
		// struct return () // by ref
	}
}


int main() {
	int m = -25;
	int n = 15;
	if (reduce(m, n))
		cout << m << '/' << n << endl; 
	else
		cout << "fraction error" << endl;



}