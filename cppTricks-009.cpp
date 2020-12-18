#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
		Read 10 integers, find which of them has the biggest value and print it.
		note :: you should use only 2 paramete
	*/
	int res, num;
	cin >> res;
	cin >> num;	if (res < num)	res = num;
	cin >> num;	if (res < num)	res = num;
	cin >> num;	if (res < num)	res = num;
	cin >> num;	if (res < num)	res = num;
	cin >> num;	if (res < num)	res = num;
	cin >> num;	if (res < num)	res = num;
	cin >> num;	if (res < num)	res = num;
	cin >> num;	if (res < num)	res = num;
	cin >> num;	if (res < num)	res = num;
	cout << res;

}