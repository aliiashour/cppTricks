#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
	 * Let's print the upper triangle first
	 * Let's assume N = 4, how many spaces and starts we print
	 * row		spaces		stars
	 * 1		3			1
	 * 2		2			3
	 * 3		1			5
	 * 4		0			7
	 * Now we wanna develop formulas for number of spaces and number of starts
	 * For a given 'row'
	 * 	Spaces are: N - rows   	(3, 2, 1, 0)
	 * 	Starts are: 2*row -1	(1, 3, 5, 7)
	 *
	 * Now we just iterate for each row
	 * 	print spaces
	 * 	then print starts
	 */


	int n;cin >> n;
	int row = 1;
	while (row<=n) 
	{
		
		int stars_count = 1; 
		while (stars_count <= n-row)
		{
			cout << " ";
			stars_count++; 
		}
		stars_count = 1; 

		while (stars_count <= 2 * row - 1)
		{
			cout << "*";
			stars_count++;
		}
		cout << endl;

		row++;
	}
	row = n; 
	while (row>=1)
	{
		int stars_count = 1; 
		while (stars_count <= n - row)
		{
			cout << " ";
			stars_count++;
		}
		stars_count = 1;
		while (stars_count <= 2 * row - 1)
		{
			cout << "*";
			stars_count++;
		}
		cout << endl;

		row--; 
	}
	return 0;
}