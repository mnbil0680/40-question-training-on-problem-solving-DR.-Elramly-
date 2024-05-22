#include <bits/stdc++.h>

#include <chrono>
using namespace std;
using namespace std::chrono;
void swap_floats(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void reverse(float a[], int n)
{
	int i = 0, j = n - 1;
	while (i < j)
	//swap_floats(a[++i], a[--j]); // worng
	swap_floats(a[i++], a[j--]); // true
	
}

int main() {
	
	float arr[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	cout << endl;
	cout << "Array before reverse : ";
	for (int i = 0; i < 7;i++) {
		cout << arr[i] << "  ";
	}

	cout << endl; cout << endl;
	reverse(arr, 7);


	cout << "Array after reverse :  ";
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl; cout << endl;
	
}