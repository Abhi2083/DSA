#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hi" << endl;
        cout << "Hey" << endl;
        continue;
        cout << "Reply to karde" << endl;
    }

    cout << endl;
    int n;
    cin >> n;
    for (int a = 0; a <= n; a++)
    {
        if (a < n)
        {
            cout << "Hello" << endl;
        }
        else(a >= n);
            {
                cout << "What's Up" << endl;
                 break;
            }
    }

    cout << endl;
    return 0;
}