#include <iostream>
using namespace std;
// swap 1 variable temp
// 
// min , max 
// 
// first < last (normal) --> for(first => last)
// last < first (normal) --> for(last => first)
int sum_from_to1(int first, int last) {
	// we use min and max method
	int max;
	int min;
	if (first > last) {
		 max = first;
		 min = last;
	}
	else {
		 max = last;
		 min = first;

	}
	int sum = 0; 
	for (int i = min; i <= max; i++) {
		sum += i;
	}
	return sum;
} 
int sum_from_to2(int first, int last) {
	// we use swap method
	if (last < first) {
		int temp = last;
		last = first;
		first = temp;
	}
	int sum = 0;
	for (int i = first; i <= last; i++) {
		sum += i;
	}
	return sum;
}
int sum_from_to3(int first, int last){
	// we use DR.ALRAMLY method
	int i, partial_sum = 0;
	if (first <= last)
		for (i = first; i <= last; ++i)
			partial_sum += i;
	else
		for (i = first; i >= last; --i)
			partial_sum += i;
	return partial_sum;

	/*
	first
	|
	|
	|

	last
	
	
	*/
}




int main() {
	cout << sum_from_to1(4, 7) << endl;
	cout << sum_from_to1(-3, 1) << endl;
	cout << sum_from_to1(7, 4) << endl;
	cout << sum_from_to1(9, 9) << endl;

	cout << endl;

	cout << sum_from_to2(4, 7) << endl;
	cout << sum_from_to2(-3, 1) << endl;
	cout << sum_from_to2(7, 4) << endl;
	cout << sum_from_to2(9, 9) << endl;

	cout << endl;

	cout << sum_from_to3(4, 7) << endl;
	cout << sum_from_to3(-3, 1) << endl;
	cout << sum_from_to3(7, 4) << endl;
	cout << sum_from_to3(9, 9) << endl;
}

/*


 last
  

  swap


  first
*/
