#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
		write a progra that determind if there is an intersection between two givin interval
		--if there is print the interval
		--if not print -1
		ex://
			# 1 3		2 5		--op--	2 3

			# 1 5		5 7		--op--		-1

		hint#1:: to know if the two interval are intersection so this condition must be true ( start_2 < end_1 && end_2 > start_1 )
		hint#2:: the intersection interval position are (maximum of starts) (minimum of ends)
	*/
	int f1, t1;cin >> f1 >> t1;
	int f2, t2;cin >> f2 >> t2;
	if (f2<t1 && t2>f1) {
		if (f1 < f2) f1 = f2;
		if (t1 < t2) t2 = t1;
		cout << f1 << ' ' << t2 << endl;
	}
	else cout << -1 << endl;
}