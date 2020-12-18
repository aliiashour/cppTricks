#include <iostream>
#include <string>
using namespace std;

int main()
{

   /*
		Write a program that reads 2 numbers a, b and divide them (a/b), but prints
		only the fraction part
		ex://
		201/25 = 8.04
		--op-- 0.04
   */
	double a, b;cin >> a >> b;
	double res = a / b; 
	cout << res - (int)res << endl;

}