#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

int main()
{
    /*
    == use loops to change number string to integer one
    == ex '456'(string value) res -> 456(int value)
    */
    char str[] = "43654" ;
    cout<< typeid(str).name()<< "  " << str <<endl;
    int num = 0 ;
    for (size_t i = 0; str[i] ; i++) // if the current string number is '0' so this is already the end of the char array
    {
        // '0' the string character 0 stored at the char data type as 48
        num = num *10 + (str[i] - '0') ; //num = 0*10 +(52-48)  = 4 when the current character is '4'
    }
    cout<< typeid(num).name()<< "  " << str <<endl;
}
