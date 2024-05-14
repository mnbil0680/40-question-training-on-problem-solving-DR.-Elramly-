#include <iostream>
using namespace std;
int main() {
	cout << "Here's a list of the ASCII values of all the upper" << " case letters.\n";
	char letter = 'A';
	while (letter <= 'Z') {
		cout << letter << " " << int(letter) << endl;
		letter++;
	}
	
		
	/*
	=========
	FIRST LOOP
	=========
	65 <= 90 #true
	print(A 65)

	=========
	SECOND LOOP (infinity)
	=========
	65 <= 90 #true
	print(A 65)
	
	*/
}
