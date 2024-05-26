#include <bits/stdc++.h>
using namespace std;
void eliminate_duplicates(int a[], int& n)
{
	int last_unique = 0; // Keeps track of the end of the subarray of
	// integers known to be all different.
	int i;
	for (i = 1; i < n; ++i) // Start i at the second cell (number 1).
	{
		// Determine whether a[i] is already present among the integers 
		// in cells a[0],...,a[last_unique].
		int j = 0;
		while (j <= last_unique && a[i] != a[j])
			++j;


		if (j > last_unique) // then a[i] is not present 
			a[++last_unique] = a[i]; // earlier, so put a[i] into the 
		// list of all different integers.
	}
	n = last_unique + 1; // Modify n so that it tells the number of
	// distinct integers in the processed array.
}


int main() {
	
	
	int arr[11] = { 58 , 26 , 91 , 26 , 70 , 70 , 91 , 58 , 58 , 58 , 66 };

	
	int n = 11;

	cout << "Size of array is : " << n << endl;
	cout << "Array before :   ";
	for (int i = 0; i < 11; i++) {
		cout << setw(4) <<left <<arr[i] << setw(2) << "  ";
	}

	cout << endl << endl;
	eliminate_duplicates(arr,n);

	cout << "Size of array is : " << n << endl;
	cout << "Array after  :   ";
	for (int i = 0; i < 11; i++) {
		cout << setw(4) << left << arr[i] << setw(2) << "  ";
	}
	cout << endl << endl;
	
	

	
	
}