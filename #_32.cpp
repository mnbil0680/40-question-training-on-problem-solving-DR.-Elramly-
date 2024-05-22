#include <bits/stdc++.h>
using namespace std;

int location_of_target(const int a[], int n, int target)
{
	int location = -1; // Target not seen yet.
	for (int i = 0; i < n; ++i)
		if (a[i] == target)
			location = i;
	return location;
}
int main() {
	
	
	int arr[7] = { 58 , 26 , 91 , 34 , 70 , 34 , 88 };
	

	cout << "the location of the target is :   " << location_of_target(arr, 7,34) << endl;
	
}