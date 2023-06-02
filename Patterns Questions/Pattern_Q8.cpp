#include <iostream>
using namespace std;

//  pattern=
// 1
// 23
// 345
// 4567


int main()
{
    int n;
    cout << "value of n:- ";
    cin >> n;

    int row = 1;
    while (row <= n){
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}