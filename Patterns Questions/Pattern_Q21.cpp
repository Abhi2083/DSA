#include <iostream>
using namespace std;

// Pattern to be printed-
//      1
//     22
//    333
//   4444
//  55555
// 666666


int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}