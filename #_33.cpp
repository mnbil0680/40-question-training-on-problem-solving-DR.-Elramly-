#include <bits/stdc++.h>
using namespace std;
void swap_floats(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void rotate_right(float a[], int n)
{
	float temp = a[n - 1]; // Hold the contents of the last cell.

	for (int i = n - 1; i >= 1; --i)
		a[i] = a[i - 1];
	a[0] = temp;


}

void my_rotate_right(float a[], int n)
{

	for (int i = 1; i < n; i++)
		swap_floats(a[0],a[i]);
}

int main() {
	
	
	float arr[5] = { 5.8 , 2.6 , 9.1 , 3.4 , 7.0 };
	

	cout << "Array before rotate : ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "  ";
	}

	cout << endl << endl;

	rotate_right(arr,5);
	//my_rotate_right(arr, 5);


	cout << "Array after rotate  :  ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "  ";
	}

	cout << endl << endl;
	
}