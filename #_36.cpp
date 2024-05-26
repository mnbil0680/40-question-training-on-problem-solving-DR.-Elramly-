#include <bits/stdc++.h>
using namespace std;
int concatenate(const int a[],int m,const int b[], int n,int c[], int p)
{
	if (m + n > p)
		return 1;
	int i, j;
	for ( i = 0; i < m; ++i) // i ==> arr1 and large arr
		c[i] = a[i];
	for ( j = 0; j < n; ++j) // j ==> arr2
		c[i++] = b[j]; // Increment i and j after each assignment
	return 0;
}


int main() {
	
	
	int arr1[7] = { 58 , 26 , 91 , 34 , 70 , 34 , 88 };
	int arr2[4] = { 29 , 41 , 10 , 66};
	int concARR[11];
	

	cout << "Array1  :   ";
	for (int i = 0; i < 7; i++) {
		cout << setw(4) <<left <<arr1[i] << setw(2) << "  ";
	}

	cout << endl << endl;

	cout << "Array2  :   ";
	for (int i = 0; i < 4; i++) {
		cout << setw(4) << left << arr2[i] << setw(2) << "  ";
	}
	cout << endl << endl;
	concatenate(arr1, 7,arr2,4, concARR,11);

	cout << "Array after concatenate  :  ";
	for (int i = 0; i < 11; i++) {
		cout << setw(4) << left<< concARR[i] << setw(2) << "  ";
	}

	cout << endl << endl;
	
}