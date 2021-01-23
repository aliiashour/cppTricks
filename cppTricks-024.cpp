#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*
        == you have an array, you should find the most repeated value
        == EX:// 1, 2, 4, 2, 2
        == the result should be 2 repeated 3 times
    */
    const int size = 5;
    int numbers[size] = {0};
    cout << "enter your five numbers" << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i]; 
    }
    int repeat_count = -1, most_value = -1; 
    for (size_t i = 0; i < size; i++)
    {
        int repeat = 0; 
        for (size_t j = 0; j < size; j++)
        {
            if (numbers[j] == numbers[i])
                repeat++; 
        }
        if (repeat > repeat_count) {
            repeat_count = repeat; 
            most_value = numbers[i];
        }
    }
    cout << most_value << " repeated " << repeat_count << " times" << endl;
    return 0;
}
