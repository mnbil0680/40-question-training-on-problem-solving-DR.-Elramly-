#include <iostream>
using namespace std;
int main()
{
	// 
	enum color_type { red, orange, yellow, green, blue, violet };
	color_type shirt, pants;
	shirt = red;  // 0
	pants = blue; // 4
	cout << shirt << " " << pants << endl; // print(0 4)
	return 0;
}