#include <iostream>
using namespace std;
// 1 --> Prime
// 0 --> Not a Prime no
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is a Prime no." << endl;
    }
    else
    {
        cout << n << " is not a Prime no." << endl;
    }
    cout << endl;
    return 0;
}