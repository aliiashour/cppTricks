#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*
    == use loops to lower the characters givien
    */
    char str[] = "ABCDEFGHJ" ;
    cout<<str<<endl;
    int len = strlen(str);
    for (size_t i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') { // make sure that the current character is a Uppercase letter

            // the data type char store the characters as integer value (Ascii code corosponde to it)
            // so A -> 65, B -> 66, C -> 67 and so on
            // so a -> 97, b -> 98, c -> 99 and so on

            str[i] -= 'A'; //ex A = A - A => A = 65 - 65 = 0
            str[i] += 'a'; // 0 + 97 = 97

        }
    }
    cout<<str<<endl;
}
