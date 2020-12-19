#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
		write a program with while loop to read an integer number
		--in-- 4
		--op-- 
		*
		**
		***
		****
	*/
	int n;cin >> n;
	int row = n;
	while (row > 0)
	{
		int c = row; 
		while (c <= n)
		{
			cout << "*";
			c++;
		}
		cout << endl;
		row--;
	}
}