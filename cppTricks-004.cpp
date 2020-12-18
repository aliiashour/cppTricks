#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*

    ====

        q1 => using only %2 how to know if he givin number is even or odd
        q1 => using only %10 how to know if he givin number is even or odd
        q1 => using only /2 how to know if he givin number is even or odd
        output
            1 => is even
            0 => is odd
    */
    int q_1; cin >> q_1;

    cout << "answer using %2 => " << (q_1 % 2 == 0) << endl;

    int ans_2 = q_1 % 10;  // even digit 0 || 2 || 4 || 6 || 8 only
    cout << "answer using %10 => " << (ans_2 == 0 || ans_2 == 2 || ans_2 == 4 || ans_2 == 6 || ans_2 == 8) << endl;

    double ans_3 = q_1 / 2.0;
    ans_3 = ans_3 - int(ans_3);
    cout << "answer using /2 => " << (ans_3 == 0) << endl;

}