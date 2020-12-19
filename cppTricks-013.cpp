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
		int stars_count = 1; 
		while (stars_count <= row)
		{
			cout << "*";
			stars_count++;
		}
		cout << endl;
		row--;
	}
}