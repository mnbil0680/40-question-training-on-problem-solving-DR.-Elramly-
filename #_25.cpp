#include <bits/stdc++.h>

#include <chrono>
using namespace std;
using namespace std::chrono;
void digit_name(int digit_value)
{
	switch (digit_value)
	{
	case 1: cout << "one"; break;
	case 2: cout << "two"; break;
	case 3: cout << "three"; break;
	case 4: cout << "four"; break;
	case 5: cout << "five"; break;
	case 6: cout << "six"; break;
	case 7: cout << "seven"; break;
	case 8: cout << "eight"; break;
	case 9: cout << "nine"; break;
	default: cout << "digit error" << endl;
	}
}


void digit_name_if(int digit_value) {
	if (digit_value == 1) {
		cout << "one";
	}
	else if (digit_value == 2) {
		cout << "two";
	}
	else if (digit_value == 3) {
		cout << "three";
	}
	else if (digit_value == 4) {
		cout << "four";
	}
	else if (digit_value == 5) {
		cout << "five";
	}
	else if (digit_value == 6) {
		cout << "six";
	}
	else if (digit_value == 7) {
		cout << "seven";
	}
	else if (digit_value == 8) {
		cout << "eight";
	}
	else if (digit_value == 9) {
		cout << "nine";
	}
	else {
		cout << "digit error" << endl;
	}
}

int main() {
	auto start = high_resolution_clock::now();
	
	digit_name(9);   // 0.135 ms
	digit_name_if(9);// 0.178 ms
 	



	//  =============================================================================
	cout << endl << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by function: " << (((duration.count() / 1000) / 60) / 1000.000) << " Minutes" << endl;
	cout << "Time taken by function: " << (((duration.count() / 1000)) / 1000.000) << " Seconds" << endl;
	cout << "Time taken by function: " << (((duration.count())) / 1000.000) << " mileseconds" << endl;

	//  =============================================================================

}