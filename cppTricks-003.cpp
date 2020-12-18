#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*

    ====
        write a program to read one integer number N then display the sum of 1 to N

        ex:// N = 7
        output 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
    */
    int N; cin >> N; 
    cout << (N * (N + 1)) / 2 << endl;


}