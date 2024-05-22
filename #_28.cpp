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

/* from me */  
// from DR.
void sort3(float& x, float& y, float& z)
{
	float temp; /* NOT necessary */

	if (x <= y && y <= z) // the values are already in order;
		; // do nothing

	/* 3 - 5 - 1*/
	else if (x <= y) // then z < y (or we'd have stopped above)
	{
		swap_floats(z, y); // After this call, y < z and x <= z are 
		// true but we don't know how x and y 
		if (x > y) // compare.
			swap_floats(x, y); // Now x < y <= z must be true.
	}
	/*5 - 3 - 1 */
	else // If neither of the above is true, then we know that y < x
	{
		swap_floats(x, y); // After this call, x < y is true.
		if (y <= z) // the values are now in correct order; 
			; // do nothing
			// [ Continued on the next page ]
		else // it must be the case that z < y 
		{
			swap_floats(y, z); // After this call, y <= z is true.
			if (x > y)
				swap_floats(x, y);
		}
	}
}


void my_sort(float& x, float& y, float& z) {
	float min,mid, max;
	if (x <= y && y <= z) {
		;
	}
	else if (x <= y && x <= z) {
		min = x;
		if (y >= z) {
			max = y;
			mid = z;
		}
		else {
			max = z;
			mid = y;
		}
	}
	else if (y <= x && y <= z) {
		min = y;
		if (x >= z) {
			max = x;
			mid = z;
		}
		else {
			max = z;
			mid = x;
		}
	}
	else {
		min = z;
		if (x >= y) {
			max = x;
			mid = y;
		}
		else {
			max = y;
			mid = x;
		}
	}
	z = max;
	y = mid;
	x = min;
}

int main() {
	auto start = high_resolution_clock::now();

	float a = 3.2, b = 5.8, c = 0.9;
	sort3(a, b, c);
	cout << a << " " << b << " " << c << endl;
	// sort3 ==> 1 ms
	// my_sort ==> 0.8 ms

	// sort3 ==> 3 ms
	// my_sort ==> 2 ms
	


	//  =============================================================================
	cout << endl << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by function: " << (((duration.count() / 1000) / 60) / 1000.000) << " Minutes" << endl;
	cout << "Time taken by function: " << (((duration.count() / 1000)) / 1000.000) << " Seconds" << endl;
	cout << "Time taken by function: " << (((duration.count())) / 1000.000) << " mileseconds" << endl;

	//  =============================================================================
}