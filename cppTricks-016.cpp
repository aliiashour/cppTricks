#include <iostream>
#include <string>
using namespace std;

int main()
{


	/*
		Read an integer N, then find its reverse integer R
		Input: 123
		Output: 321
	 */
	int n; cin >> n;
	int res = 0;
	while (n)
	{
		int last_digit = n % 10;
		res = res * 10 + last_digit;
		n /= 10;
	}

	cout << res << endl;

	return 0;
}