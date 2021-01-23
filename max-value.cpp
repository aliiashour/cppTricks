#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*
        == you have an array, you should find the first and secound maximun values
        == EX:// 10, 24, 34, 43, 23
        == the result should be 43 and 34
        == eith only one loop
    */
    const int size = 5;
    int numbers[size] = {0};
    cout << "enter your five numbers" << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i]; 
    }
    int max1 = 0, max2 = 0; 
    if (numbers[0] >= numbers[1]) {
        max1 = numbers[0]; 
        max2 = numbers[1]; 
    }
    else {
        max1 = numbers[1];
        max2 = numbers[0];
    }
    for (size_t i = 2; i < size; i++)
    {
        if (max1 < numbers[i]) {
            max2 = max1; 
            max1 = numbers[i]; 
        }
        else if (max2 < numbers[i]) {
            max2 = numbers[i];
        }
    }
    cout << endl << "the first max and 2th are " << max1 << " " << max2 << endl;
    return 0;
}