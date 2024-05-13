#include <iostream>
using namespace std;
int main() {

	const int LENGTH = 21; // 0 -> 20 
	char message[LENGTH]; // [20] = 
	int i; 
	cout << "Enter a sentence on the line below." << endl;
	cin.get(message[0]); // P    [lease go away.] on screen 

	// (cin >> arry of characters  ch by ch) != (cin >> string left the station)

	i = 0;
	while (i < LENGTH - 1 && message[i] != '\n')
	{
		++i;
		cin.get(message[i]);// all 21 character
		// replace [20] = j 1 white spaces 
	}
	message[i] = '\0'; // Replace '\n' if that was read.
	// Otherwise replace the last character read.
	cout << message << endl;

	
}
// cin >> message[i];
// cin.get(message[i]);
