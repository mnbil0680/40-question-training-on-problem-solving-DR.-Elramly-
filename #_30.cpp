#include <bits/stdc++.h>
using namespace std;


float sum(const float a[], int n)
{
	float sum = 0.0;
	for (int i = 0; i < n; ++i)
		sum += a[i];
	return sum;
}

int main() {
	
	float arr[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	//float arr[5] = { 5.8, 2.6, 9.0, 3.4, 7.1 };

	cout << "sum  =  " << sum(arr, 7) << endl;
	
}