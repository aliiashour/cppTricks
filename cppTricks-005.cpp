#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*

    ====

        Write a program that reads an integer and print the 4th from the right side. If
        no such digit, print 0 without using if statement
        ex://
            123   --op-- 0
            1234  --op-- 4

    */

    int num; cin >> num; 

    int is_mt_4_digit = num > 999;          //is more then four digit
    int is_lt_4_digit = 1 - is_mt_4_digit; //is less then four digit

    int to_get_dg_4_pos = num / 1000; 
    int dg_4_val = to_get_dg_4_pos % 10; 
    cout << "the 4th digit is => " << is_mt_4_digit * dg_4_val + is_lt_4_digit * 0 << endl;
    
    // very good solution
    /*
        cout<<( num/1000 % 10 )<<endl;
    */
}
