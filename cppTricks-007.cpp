#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
		Write a program that reads 2 integers and print such reminder without using
		the modulus operator %
		ex://
		27%12 = 3

		hint => the % operator is equal == the fractoin part of normal divition ( / ) * the denominator

	*/
	int a, b;cin >> a >> b;
	int dec_part = a / b;  
	double fra_part = (a / (double)b) - dec_part;
	cout << fra_part * b << endl;

}