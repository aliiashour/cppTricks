#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

int main()
{
  /*
  == reverse string 
  ex:// "programing"
  re:// "gnimargorp"
  */
    string str = "simple test" ;
    int len = str.length();
    for (size_t i = 0; i < len / 2; i++)
    {
        // just swap str[i] and str[len - i - 1] ;
        char ch = str[i];
        str[i] = str[len - 1 - i];
        str[len - i - 1] = ch;
    }
    cout << str << endl;
}
