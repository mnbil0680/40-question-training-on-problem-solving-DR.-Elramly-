#include <iostream>
using namespace std;
int enough(int goal) {
	int sum = 1, counter = 1; // X
	while (sum < goal) {
		// 1 < -7 #false break
		sum += ++counter; // sum = 1+2+ counter[4] break  variable counter [4]
		//sum will break the loop
	}
	return counter;// 2 print(2);

}


int main() {
	cout << enough(9)<<endl;
	cout << enough(21) << endl;
	cout << enough(-7) << endl;
	cout << enough(1) << endl;

}




/*
int enough(int goal)
{
	int n = 1, sum = 1;
	while (sum < goal)
		sum += ++n;
	return n;
}
*/