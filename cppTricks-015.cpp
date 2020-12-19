#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
		Read an integer N (1 <= 30): Print the first N numbers that are
		multiple of 3 but not multiple of 4
		Input: 11
		Output: 3 6 9 15 18 21 27 30 33 39 42 (this is the first 11 numbers from 0 to infinite which satisfiy the condition)
		hint :: the loop counter will increase only if the condition be true
	 */


	int N; cin >> N;
	int cnt = 0;
	int c = 0; 
	while (cnt < N) {

		if (c % 3 == 0 && c % 4 != 0) {
			cout << c << " ";
			cnt++; 
		}
		c++; 
	}
	return 0;
}