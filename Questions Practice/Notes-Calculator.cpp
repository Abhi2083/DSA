#include <iostream>
using namespace std;

// counting no of notes in given amount

int main()
{
    int n;
    int n1, n20, n50, n100;
    n1 = n20 = n50 = n100 = 0;
    cout << "Enter the amount = ";
    cin >> n;

    switch (n >= 500)
    {
    case 1:
        n100 = n / 100;
        n -= n100 * 100;
        break;
    }

    switch (n >= 50)
    {
    case 1:
        n50 = n / 50;
        n -= n50 * 50;
        break;
    }

    switch (n >= 20)
    {
    case 1:
        n20 = n / 20;
        n -= n20 * 20;
        break;
    }

    switch (n >= 1)
    {
    case 1:
        n1 = n / 1;
        n -= n1 * 1;
        break;
    }

    cout << "No of 100 rupees note = " << n100 << endl;
    cout << "No of 50  rupees note = " << n50  << endl;
    cout << "No of 20  rupees note = " << n20  << endl;
    cout << "No of 1   rupees note = " << n1   << endl;

    cout << endl;

    return 0;
}