#include <bits/stdc++.h>
using namespace std;

int location_of_largest(const int a[], int n)
{
	int index_of_biggest = 0; // Location of the largest so far.
	for (int i = 1; i < n; ++i) // Start comparing at the second cell.
		if (a[index_of_biggest] < a[i])
			index_of_biggest = i;
	return index_of_biggest;
}
int main() {
	
	int arr[5] = { 58 , 26 , 90 , 34 , 71 };
	int arr2[8] = { 58 , 26 , 91 , 34 , 70 , 91 , 88 ,91};
	

	cout << "the location of the largest is :   " << location_of_largest(arr2, 8) << endl;
	
}