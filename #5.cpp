#include <iostream>
using namespace std;
int main() {
	int i = 5, j = 6, k = 7, n = 3;
	cout << i + j * k - k % n << endl;
		 // 5 + (6 * 7) - (7 % 3)
		//  5 + 42 - 1 == 46 print(46) 
	cout << i / n << endl; // 5/3 = 1.6666666666666666666 print(1)
	
	/*
	(Operator pecednce)
	===================

	1) ++ --
	2) !
	3) * / %
	4) + -
	5) < <= > >=
	6) && 
	7) ||


	*/

}