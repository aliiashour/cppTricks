#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

int main()
{
int n = 1234;

    cout << typeid(n).name() << "  " << n << endl;

    string str; // the string data type is class not as int, you will know it at object oriented programin(oop) later

    while (n) {
        short last_digit = n % 10; // 123 % 10 = 3
        str += last_digit+'0'; //str += 3 + 0 = 3
        n /= 10; // counter down, nedded for loop
    }

    cout << str << " before swaping" << endl;

    // the same logic of the previous problem (reverse techniqe)
    int len = str.length();
    for (size_t i = 0; i < len / 2; i++)
    {
        // just swap str[i] and str[len - i - 1] ;
        char ch = str[i];
        str[i] = str[len - 1 - i];
        str[len - i - 1] = ch;
    }

    cout << str << " after swaping" << endl;
    cout << typeid(str).name() << "  " << str << endl;
}
