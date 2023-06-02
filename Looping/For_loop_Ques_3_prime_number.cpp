#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:- ";
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        //rem = 0, Not a prime number
        if (n % i == 0)
        {
            // cout << " Not Prime" << endl;
             isPrime = 0;
            break;
        }
    }

        if (isPrime == 0)
    {
        cout << "Not prime" << endl;
    }
    else
    {
        cout << "Prime" << endl;
    }

    cout << endl;
    return 0;
}