#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*

    ====
        you have one variable A & B
        B value is either 1 or -1 only 
        if B = 1 display output  => A * A
        if B = -1 display output => 2 * A + 1
        use only cpp basics, don't use if statement or (<, <= >, >=) operatores
    */

    int A, B; cin >> A >> B; 
    int equ_1 = A * A; 
    int equ_2 = 2 * A + 1;
    int is_1 = (B + 1) / 2; 
    int is_neg_1 = 1 - is_1;
    // if the is_1 variable value equal to 1 then the B value is 1
    // if the is_1 variable value equal to 0 then the B value is -1
    cout << is_1 * equ_1 + is_neg_1 * equ_2 << endl;


}