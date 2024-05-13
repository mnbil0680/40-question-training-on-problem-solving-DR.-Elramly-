#include <iostream>
using namespace std;
int main()
{
 int n = 4, k = 2; 
 // increment ,, decreament ++V != V++
 cout << ++n << endl; // Value = 5 ;; print(5)
 cout << n << endl; // Value = 5 ;; print(5)
 cout << n++ << endl; // Value = 6 ;; print(5)
 cout << n << endl; // Value = 6 ;; print(6)
 cout << -n << endl; // Value = 6 ;; print(-6)
 cout << n << endl;// Value = 6 ;; print(6)
 
 cout << --n << endl; // Value = 5 ;; print(5)
 cout << n << endl; // Value = 5 ;; print(5)
 
 cout << n-- << endl;// Value = 4 ;; print(5)
 cout << n << endl; // Value = 4 ;; print(4)
 
 cout << n + k << endl; // 4+2 = 6 print(6)
 cout << n << endl; // print(4)
 cout << k << endl; // print(2)
 cout << n << k << endl; // print(42)
 cout << n << endl; // print(4)
 cout << " " << n << endl; // print( 4)
 cout << " n" << endl; // print( n)
 cout << "\n" << endl; // print(2 blank space تحت بعض)
 /*
 '\n'  print(                                           )
 endl; print(                                           ) 
 */
 
 cout << " n * n = "; //CAREFUL!  print( n * n = 16)
 cout << n * n << endl;
 cout << 'n' << endl;  //print(n)
 
 return 0; 
}