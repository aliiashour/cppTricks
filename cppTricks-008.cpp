#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
		Assume a year has 12 months, but each month is 30 days
		That is a year has 12 * 30= 360 days
		Read an integer: whole number of days of someone age. Print 3 numbers
		Total years total months days
		ex:// 
			input		 year month days

			200   --op-- 0	  6		20
	*/
	int days;cin >> days;
	int years = days / 360;
	days %= 360;
	int months = days / 30;
	days %= 30;
	cout << years << " " << months << " " << days << endl;
}