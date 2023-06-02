#include <iostream>
using namespace std;
/*
  Pattern to be printed
  A 
  B C
  D E F
 */

int main()
{
    int n;
    cout << "Enter the value of n:- ";
    cin >> n;

    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {

            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}