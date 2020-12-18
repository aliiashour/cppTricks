#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
		write a progra that determind if the number is fall in how many interval?
		--but you gave just 3 interval only
		--only use 4 variable and the counter is one of them
		ex://
		7 1 10 5 6 4 40 ⇒ 2
		the number 7 is fall between 1 10 so the counter will increase +1
		the number 7 is't fall between 5 6 so the counter will not increase 
		the number 7 is fall between 4 40 so the counter will increase +2
	*/
	int n;cin >> n;
	int min, max;
	int res = 0;
	cin >> min >> max; if (min <= n && n <= max) res++;
	cin >> min >> max; if (min <= n && n <= max) res++;
	cin >> min >> max; if (min <= n && n <= max) res++;
	cout << res << endl;
}