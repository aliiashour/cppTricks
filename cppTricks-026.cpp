#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*
        == get the minimum  three integers at the Array
        == EX:// 5 => 1 5 7 4 2
        == o/p   1 2 4
    */
    int N; cin >> N; 
    int arr[100] = {0};
    for (size_t i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    int min1 = 0, min2 = 0, min3 = 0; 
    min1 = arr[0]; 
    min2 = arr[1]; 
    min3 = arr[3];
    for (size_t i = 0; i < N; i++)
    {
        if (arr[i] < min1) {
            min3 = min2; 
            min2 = min1; 
            min1 = arr[i]; 
        }
        else if (arr[i] < min2 && arr[i]>min1) {
            min3 = min2; 
            min2 = arr[i];
        }
        else if (arr[i] > min2 && arr[i] < min3) {
            min3 = arr[i]; 
        }
    }
    cout << min1 << " " << min2 << " " << min3 << endl;
    return 0;
}
