#include <iostream>
using namespace std;
int main()
{
    // Q1

    //     for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " "; //Ans--> infinite loop
    //     i++;
    // }

    cout << endl;

    // Q2

    for (int i = 0; i <= 5; i++)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    // Q3

    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";

        if (i & 1)
        {
            continue;
        }
        i++;
    }
    cout << endl;
    // Q4

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
    cout << endl;
    // Q5

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }

    cout << endl;
    return 0;
}