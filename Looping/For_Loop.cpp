#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :-";
    cin >> n;

    cout << "Printing count from 1 to n " << endl;
    // method 1

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    cout << endl;

    // method 2
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }

    cout << endl;

    // Multiple initilization,condition & upgradation in for loop
    for (int a = 0, b = 1, c = 2; a >= 0, b >= 1 ,c >= 2; a--, b--,c--)
    {
        cout << a << " " << b << " " << c <<  endl;
    }

    cout << endl;
    return 0;
}