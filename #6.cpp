#include <iostream>
using namespace std;
int main() {
	int found = 0, count = 5; 
	if (!found/*1*/ || --count == 0)
		cout << "danger" << endl; // print(danger)

	cout << "count = " << count << endl; //print(5)
	// BE CAREFUL! it's tricky

}