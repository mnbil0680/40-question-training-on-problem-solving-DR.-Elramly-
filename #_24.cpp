#include <bits/stdc++.h>

#include <chrono>
using namespace std;
using namespace std::chrono;

// From DR.ELRAMLY
int is_prime1(int n)
{
	if (n <= 1)
		return 0; // n cannot be prime if n <= 1.
	int trial_divisor = 2;
	while (trial_divisor < n &&  n % trial_divisor != 0)
		++trial_divisor;
	// When the loop exits, one of two conditions must be satisfied:
	// either trial_divisor will have reached the value n -- which
	// means that n is prime or else n will be divisible by 
	// trial_divisor, in which case n will not be prime. The only
	// exception to this is when n is 2, in which case n is prime.
	if (trial_divisor == n) // n must be prime
		return 1;
	else
		return 0; // n is not prime.
}

// From me
int is_prime2(int n) {
	if (n <= 1)
		return 0;
	for (int i = 2; i < (n/2);i++) {
		if (n%i == 0) {
			return 0;
		}

	}
	return 1;
}

// From me
int is_prime3(int n) {
	if (n <= 1)
		return 0;
	for (int i = 2; i < int(sqrt(n)); i++) {
		if (n % i == 0) {
			return 0;
		}

	}
	return 1;
}


int main() {
	auto start = high_resolution_clock::now();
	
	cout << is_prime1(27644437);
	// is_prime1() ==> 40 ms
	// is_prime2() ==> 20 ms
	// is_prime3() ==> 0.25 ms
	



	//  =============================================================================
	cout << endl << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by function: " << (((duration.count() / 1000) / 60) / 1000.000) << " Minutes" << endl;
	cout << "Time taken by function: " << (((duration.count() / 1000)) / 1000.000) << " Seconds" << endl;
	cout << "Time taken by function: " << (((duration.count())) / 1000.000) << " mileseconds" << endl;

	//  =============================================================================

}