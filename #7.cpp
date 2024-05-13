#include <iostream>
using namespace std;
int main() {

	char ch;  
	char title[] = "Titanic"; // array of characters ==> string

	// [T][i][t][a][n][i][c]
	// [0][1][2][3][4][5][6]

	ch = title[1]; // ch = i;
	title[3] = ch; //  a => i  

	// [T][i][t][i][n][i][c]
	// [0][1][2][3][4][5][6]
	cout << title << endl; //print(Titinic)
	cout << ch << endl;    //print(i)

}