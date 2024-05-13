#include <iostream>
using namespace std;
int main()
{
	int n; // garbage memory 
	cout << (n = 4) << endl;  // Value = 4 ;; print(4)
	cout << (n == 4) << endl; // Value = 4 ;; print(1) == true 
	cout << (n > 3) << endl;  // Value = 4 ;; print(1) == true
	cout << (n < 4) << endl;  // Value = 4 ;; print(0) == false
	cout << (n = 0) << endl;  // Value = 0 ;; print(0) 
	cout << (n == 0) << endl; // Value = 0 ;; print(1) == true
	cout << (n > 0) << endl;  // Value = 0 ;; print(0) == false
	cout << (n && 4) << endl; // Value = 0 ;; print(0) 0 AND (4 as true(1))
	cout << (n || 4) << endl; // Value = 0 ;; print(1) 0 OR (4 as true(1))
	cout << (!n) << endl;     // Value = 0 ;; print(1) NOT 0 == 1
	return 0; //0 ==> 1;; 1 ==>
}