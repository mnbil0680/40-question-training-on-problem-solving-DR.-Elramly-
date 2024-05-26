#include <bits/stdc++.h>
using namespace std;
int shift_right(float a[], int left, int right, int distance)
{
	if (left > right || distance <= 0)
		return 1;
	int i;
	for (i = right; i >= left; --i)
		a[i + distance] = a[i];
	return 0;
}

int my_shift_right(float a[], int left, int right, int distance)
{
	if (left > right || distance <= 0)
		return 1;
	int i;
	for (i = right; i >= left; --i) {
		a[i + distance] = a[i];
		a[i] = 0.000;
	}

	return 0;
}

int main() {
	
	
	float arr[11] = { 5.8 , 2.6 , 9.1 , 3.4 , 7.0 , 5.1 , 8.8 , 0.3 , -4.1 , 8.0 , 2.7 };
	//float arr[11] = { 5.8 , 2.6 , 9.1 , 3.4 , 7.0 , 5.1 , 8.8 , 0.3 , -4.1 , 8.0 , 2.7 };
	

	cout << "Array before shift :   ";
	for (int i = 0; i < 11; i++) {
		cout << setw(4) <<left <<arr[i] << setw(2) << "  ";
	}

	cout << endl << endl;

	my_shift_right(arr, 3, 7, 2);

	cout << "Array after rotate  :  ";
	for (int i = 0; i < 11; i++) {
		cout << setw(4) << left<< arr[i] << setw(2) << "  ";
	}

	cout << endl << endl;
	
}