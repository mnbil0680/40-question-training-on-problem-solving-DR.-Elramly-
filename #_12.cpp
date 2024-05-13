#include <iostream>
using namespace std;
int main() {
	int n = 10;
	while (n > 0) {
		n /= 2;
	}

	cout << n * n << endl;
	/*
	================
	 FIRST LOOP
	================
	10 > 0 // true

	value of n before operation is 10
	n = n/2 --> 10/2 = 5
	value of n before operation is 5
	n*n ==> 5*5 = 25 print(25)

	================
	 SECOND LOOP
	================
	5 > 0 // true

	value of n before operation is 5
	n = n/2 --> 5/2 = 2.5 BUT when store it in int variable it will be 2
	value of n before operation is 2
	n*n ==> 2*2 = 4 print(4)

	================
	 THIRD LOOP
	================
	2 > 0 // true

	value of n before operation is 2
	n = n/2 --> 2/2 = 1 
	value of n before operation is 1
	n*n ==> 1*1 = 1 print(1)

	================
	 FOURTH LOOP
	================
	1 > 0 // true

	value of n before operation is 1
	n = n/2 --> 1/2 = 0.5 BUT when store it in int variable it will be 0
	value of n before operation is 0
	n*n ==> 0*0 = 0 print(0)

	================
	 SIXTH LOOP (BREAK)
	================
	0 > 0 // false

	
	*/
}


  
 
