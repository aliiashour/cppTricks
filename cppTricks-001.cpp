#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*
    
    ====
        you have eigt inputs number, so you have eigt places of numbers 
        4 is even places and other 4 places is odd
        ex:// 
             n1 n2 n3 n4 n5 n6 n7 n8

             so places of n1, n3, n5, n7 is odd ones
             &  places of n2, n4, n6, n8 is even places
             the output should be like this 
             sum_of_odd_places = n1 + n3 + n5 + n7
             sum_of_even_places = n2 + n4 + n6 + n8
             
             input 1 2 3 4 5 6 7 8
             output
                    sumOfOddPlaces = 1+3+5+7 = 16
                    sumOfOddPlaces = 2+4+6+8 = 20
    */

    int n1, n2, n3, n4, n5, n6, n7, n8; 
    cin >> n1 >> n2; 
    cin >> n3 >> n4;
    cin >> n5 >> n6;
    cin >> n7 >> n8;

    cout << "sum of odd places equal to " << n1 + n3 + n5 + n7 << endl;
    cout << "sum of even places equal to " << n2 + n4 + n6 + n8 << endl;

}