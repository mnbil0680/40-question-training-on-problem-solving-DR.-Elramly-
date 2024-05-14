#include <iostream>
using namespace std;
int main() {
	//  ORIGINAL CODE  //
	int i = 5;
	while (i > 0)
	{
		--i; 
		cout << i << endl;
	}
	//////////////////////////////
	// THE FIRST SOLUTHION

	cout << endl;
	int x = 5;
	while (x > 0)
	{
		cout << --x << endl; 
	}
	//////////////////////////////
	// THE SECOND SOLUTHION

	cout << endl;
	int y = 5;
	while (y--) 
	{
		cout << y  << endl;
	}

	/*
	============
	FIRST LOOP
	============
	5 > 0 #true
	after decreament i = 4
	print(4)

	============
	SECOND LOOP
	============
	4 > 0 #true
	after decreament i = 3
	print(3)

	============
	THIRD LOOP
	============
	3 > 0 #true
	after decreament i = 2
	print(2)

	============
	FOURTH LOOP
	============
	2 > 0 #true
	after decreament i = 1
	print(1)

	============
	FIFTH LOOP
	============
	1 > 0 #true
	after decreament i = 0
	print(0)
	
	============
	SIXTH LOOP (BREAK)
	============
	0 > 0 #false
	
	
	
	
	*/
}
