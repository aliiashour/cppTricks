#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{


	/*
		print numbers from 1 to 10 
		but like this 
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10
		note :: there is no comma at the end
	 */
	int i = 1; 
	bool first_print = 1; 
	while (i <= 10)
	{
		if (!first_print) cout << ", "; 
		cout << i;first_print = 0; 
		i++;
	}
	return 0;
}