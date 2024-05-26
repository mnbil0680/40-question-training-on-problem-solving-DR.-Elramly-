#include <bits/stdc++.h>
using namespace std;
void subtotal(float a[], int n)
{
	for (int i = 1; i < n; ++i)
		a[i] += a[i - 1];
		//a[i] = a[i] + a[i - 1];
}

int main() {
	
	
	float arr[5] = { 5.8 , 2.6 , 9.1 ,3.4 , 7.0 };
	
	

	cout << "Array before sum :   ";
	for (int i = 0; i < 5; i++) {
		cout << setw(4) <<left <<arr[i] << setw(2) << "  ";
	}

	cout << endl << endl;

	subtotal(arr, 5);

	cout << "Array after sum  :  ";
	for (int i = 0; i < 5; i++) {
		cout << setw(4) << left<< arr[i] << setw(2) << "  ";
	}

	cout << endl << endl;
	
}