#include <iostream>
using namespace std;
int main() {

	const int LENGTH = 21; // 0 -> 20
	char message[LENGTH];
	cout << "Enter a sentence on the line below." << endl;
	cin.getline(message, LENGTH, '\n');
	cout << message << endl; 
	// test case A) print (Please go away.)
	// test case B) print (Please stop bothering)
	/*
	Please go away.
	[P][l][e][a][s][e][ ][g][o][ ][a] [w] [a] [y] [.] // 15 character 
	[0][1][2][3][4][5][6][7][8][9][10][11][12][13][14][15][16][17][18][19][20]

	Please stop bothering me.
	[P][l][e][a][s][e][ ][s][t][o][p] [ ] [b] [o] [t] [h] [e] [r] [i] [n] [\0] //[g][ ][m][e][.]
	[0][1][2][3][4][5][6][7][8][9][10][11][12][13][14][15][16][17][18][19][20]
	*/
	
}