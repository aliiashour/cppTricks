#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*
    == use loops to upper the characters givien
    */
    char str[] = "abcdefghj" ;
    cout<<str<<endl;
    int len = strlen(str);
    for (size_t i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') { // make sure that the current character is a Lowercase letter

            // the data type char store the characters as integer value (Ascii code corosponde to it)
            // so A -> 65, B -> 66, C -> 67 and so on
            // so a -> 97, b -> 98, c -> 99 and so on

            str[i] -= 'a'; //ex a = a - a => A = 97 - 97 = 0
            str[i] += 'A'; // 0 + 65 = 65

        }
    }
    cout<<str<<endl;
}
