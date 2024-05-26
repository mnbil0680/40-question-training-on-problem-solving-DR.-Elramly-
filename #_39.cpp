#include <bits/stdc++.h>
using namespace std;
const int FALSE = 0, TRUE = 1;
void print_initial_explanation(void)
{
	cout << "\n\nThis program is designed to exhibit the positive \n";
	cout << "divisors of positive integers supplied by you. The\n";
	cout << "program will repeatedly prompt you to enter a \n";
	cout << "positive integer. Each time you enter a positive \n";
	cout << "integer, the program will print all the divisors of \n";
	cout << "your integer in a column and in decreasing order.\n\n";
}
void get_number_from_user(int& n)
{
	do
	{
		cout << "Please enter a positive integer: ";
		cin >> n;
		if (n <= 0)
			cout << '\n' << n << " is not a positive integer.\n";
	} while (n <= 0);
}
void print_divisors(int n)
{
	cout << n << endl;
	int trial_divisor;
	for (trial_divisor = n / 2; trial_divisor >= 1; --trial_divisor)
		if (n % trial_divisor == 0)
			cout << trial_divisor << endl;
	cout << endl;
}
int user_wishes_to_repeat(void)
{
	char response;
	cout << "Would you like to see the divisors of another";
	cout << " integer (Y/N)? ";
	cin >> response;
	while (response != 'Y' && response != 'y' && response != 'N'
		&& response != 'n')
	{
		cout << "\nPlease respond with Y (or y) for yes and N (or n)";
		cout << " for no." << endl;
		cout << "Would you like to see the divisors of another";
		cout << " integer (Y/N)? ";
		cin >> response;
	}
	if (response == 'Y' || response == 'y')
		return TRUE;
	else
		return FALSE;
}


int main(void)
{
	int users_integer;
	print_initial_explanation();
	do
	{
		get_number_from_user(users_integer);
		print_divisors(users_integer);
	} while (user_wishes_to_repeat());
	cout << " thank you to watching video <3" << endl;
}
