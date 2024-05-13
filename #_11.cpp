#include <iostream>
using namespace std;
int main() {
	int n = 15; // 7  15  -3
	if (n < 10) { // 7 < 10 #true // 15 < 10 #false // -3 < 10 #true
		if (n > 0) {// 7 > 0 #true	// -3 > 0 #flase
			cout << "The number is positive." << endl; //
		}
		else {
			cout << "The number is negative." << endl;
		}
	
	}
	else {
		cout << "The number is greater than ten." << endl;
	}
	// n = 7 ==>  print(The number is positive.)
	// n = 15 ==>  print(                       ) NONE
	// n = -3 ==>  print(The number is ______________.)
}


  
 
