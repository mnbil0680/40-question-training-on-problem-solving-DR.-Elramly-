#include <iostream>
using namespace std;

// From DR.ELRAMLY 
int g_c_d1(int a, int b)
{
	if (a <= 0 || b <= 0) // a parameter is not positive
		return 0; // exit and return the error sentinel
	int trial_divisor;
	trial_divisor = (a <= b ? a : b); // set it to the smaller
	while (a % trial_divisor != 0 || b % trial_divisor != 0)
		--trial_divisor;
	return trial_divisor;
}

// From DR.ELRAMLY (Euclid's algorithm)
int g_c_d2(int a, int b) {
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

// Fom me
int g_c_d3(int a, int b) {
	if (a <= 0 || b <= 0) {
		return 0;
	}
	int min, gcd;
	(a > b) ? min = b : min = a; // (expresion) ? true(code) : false(code) ;
	for (int i = 1; i <= min; i++) {
		if (a % i == 0 && b % i == 0) {
			gcd = i; // 7 9 gcd NONE
		}
	}
	
	if (gcd <= 0) {
		return 0;
	}
	else {
		return gcd;
	}
}

// From Problem Solving 
int g_c_d4(int a, int b) {
	if (a <= 0 || b <= 0) {
		return 0;
	}
	while (a && b)a > b ? a %= b : b %= a; // a = a%b; || b = b%a;
	return a + b;
}


int main() {
	cout << g_c_d1(40, 50) << endl; // will print 10
	cout << g_c_d1(256, 625) << endl; // will print 1
	cout << g_c_d1(42, 6) << endl; // will print 6
	cout << g_c_d1(0, 32) << endl; // will print 0 (even though 32 is the g.c.d.)
	cout << g_c_d1(10, -6) << endl; // will print 0 (even though 2 is the g.c.d.)

	cout << endl;

	cout << g_c_d2(40, 50) << endl; // will print 10
	cout << g_c_d2(256, 625) << endl; // will print 1
	cout << g_c_d2(42, 6) << endl; // will print 6
	cout << g_c_d2(0, 32) << endl; // will print 0 (even though 32 is the g.c.d.)
	cout << g_c_d2(10, -6) << endl; // will print 0 (even though 2 is the g.c.d.)

	cout << endl;

	cout << g_c_d3(40, 50) << endl; // will print 10
	cout << g_c_d3(256, 625) << endl; // will print 1
	cout << g_c_d3(42, 6) << endl; // will print 6
	cout << g_c_d3(0, 32) << endl; // will print 0 (even though 32 is the g.c.d.)
	cout << g_c_d3(10, -6) << endl; // will print 0 (even though 2 is the g.c.d.)

	cout << endl;

	cout << g_c_d4(40, 50) << endl; // will print 10
	cout << g_c_d4(256, 625) << endl; // will print 1
	cout << g_c_d4(42, 6) << endl; // will print 6
	cout << g_c_d4(0, 32) << endl; // will print 0 (even though 32 is the g.c.d.)
	cout << g_c_d4(10, -6) << endl; // will print 0 (even though 2 is the g.c.d.)

}