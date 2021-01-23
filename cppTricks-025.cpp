#include <iostream>
#include <string>
using namespace std;
int main()
{
   
    int N; cin >> N; 
    int arr[500]; 
    int freq[501];
    // set all freq ceil with value -1, needed at the condition bleow
    for (int i = 0; i < 500; i++) {
        freq[i] = -1; 
    }

    for (size_t i = 0; i < N; i++)
    {
        cin >> arr[i];    //EX:// 3 5 6 7 9 
        freq[arr[i]] = i; //this array will be like this index  0 1 2 3 4 5 6 7 8 9 10 this array size should be freq[ maxmum value at arr + 1 ]
                                                       //value        0   1 2 3   4    the other ceils should be -1 as i do at previous loop
        // now the freq index is normal index
        // and the value (greater then -1) of any ceil is exactly the last index of the value at the main array (arr)
    }
    int Q = 0 , q = 0 ; cin >> Q; 
    for (size_t i = 0; i < Q; i++)
    {
        cin >> q;
        if (freq[q] > -1) {
            cout << q << " founded at position " << freq[q] << endl;
        }
        else {
            cout << q << " not founded " << -1 << endl;
        }
    }
    return 0;
}
