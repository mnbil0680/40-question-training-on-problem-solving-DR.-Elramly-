#include <iostream>
using namespace std;
int main()
{
	int n = 3;
	while (n >= 0)
	{
		cout << n * n << endl;
		--n;
	}
	/*
	===================
	FIRST LOOP
	===================
	3>=0 // true
	3*3 = 9 print(9)
	value = 2


	===================
	SECOND LOOP 
	===================
	2>=0 // true
	2*2 = 4 print(4)
	value = 1

	===================
	THIRD LOOP
	===================
	1>=0 // true
	1*1 = 1 print(1)
	value = 0

	===================
	FOURTH LOOP
	===================
	0>=0 // true
	0*0 = 0 print(0)
	value = -1


	===================
	FIFTH LOOP (BREAK)
	===================
	-1>=0 // FALSE
	
	
	*/
	cout << n << endl; // print(-1)

	// BE CARFUL from BELOW CODE
	
	while (n < 4)
		cout << ++n << endl;//
	/*
	===================
	FIRST LOOP
	===================
	-1<4 // true
	++n  ==> value(0)  print(0)


	===================
	SECOND LOOP
	===================
	0<4 // true
	++n  ==> value(1)  print(1)

	===================
	THIRD LOOP
	===================
	1<4 // true
	++n  ==> value(2)  print(2)

	===================
	FOURTH LOOP
	===================
	2<4 // true
	++n  ==> value(3)  print(3)

	===================
	FIFTH LOOP 
	===================
	3<4 // true
	++n  ==> value(4)  print(4)

	===================
	SIXTH LOOP (BREAK)
	===================
	4<4 // FALSE


*/


	cout << n << endl; // print(4)

	while (n >= 0)
		cout << (n /= 2) << endl;
	/*
	===================
	FIRST LOOP
	===================
	4>=0 // true
	Value n before operation = 4

	n = n/2 ==>  4/2 = 2 

	Value n before operation = 2
	print(2)


	===================
	SECOND LOOP
	===================
	2>=0 // true
	Value n before operation = 2

	n = n/2 ==>  2/2=1

	Value n before operation = 1
	print(1)

	===================
	THIRD LOOP
	===================
	1>=0 // true
	Value n before operation = 1

	n = n/2 ==>  1/2 = 0.5 when stor it in int it will be 0

	Value n before operation = 0
	print(0)
	===================
	FOURTH LOOP and infinity
	===================
	0>=0 // true
	Value n before operation = 0

	n = n/2 ==>  0/2= 0 

	Value n before operation = 0
	print(0)

	*/

	return 0;
}

