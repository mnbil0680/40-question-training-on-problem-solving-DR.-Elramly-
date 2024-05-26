#include <bits/stdc++.h>
using namespace std;
int number_of_matches(const char a[], const char b[])
{
	const char NUL = '\0';
	int i = 0; // i keeps track of how many pairs of cells match
	while (a[i] != NUL && b[i] != NUL && a[i] == b[i])
		++i;
	return i;
}
// b o a s t
// b o a x t
// 4
int main() {
	
	
	char arr1[6] = { 'b' , 'o' , 'a' , 's' , 't' , '\0' };
	char arr2[6] = { 'b' , 'o' , 'a' , 'x','t' , '\0'};
	int concARR[11];
	

	cout << "Array1  :   ";
	for (int i = 0; i < 6; i++) {
		cout << setw(4) <<left <<arr1[i] << setw(2) << "  ";
	}

	cout << endl << endl;

	cout << "Array2  :   ";
	for (int i = 0; i < 6; i++) {
		cout << setw(4) << left << arr2[i] << setw(2) << "  ";
	}
	cout << endl << endl;
	cout << number_of_matches(arr1,arr2);

	

	
	
}