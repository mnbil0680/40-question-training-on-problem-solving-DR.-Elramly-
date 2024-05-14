#include <iostream>
using namespace std;
int main() {
	int n = 7; // 0 15 7
	//cout << "Enter an integer: ";
	///cin >> n;
	if (n < 10) // 0 < 10 #true // 15 < 10 # // 7 < 10 #true
		cout << "less than 10" << endl;
	else if (n > 5) // 15 > 5 #true
		cout << "greater than 5" << endl;
	else
		cout << "not interesting" << endl;
	// n = 0 ==> print(less than 10)
	// n = 15 ==> print(greater than 5)
	// n = 7 ==> print(less than 10)
	// NONE


}