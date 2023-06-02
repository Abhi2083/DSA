#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n, bool prime[])
{
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the range to find prime numbers: ";
    cin >> n;

    bool prime[n + 1];
    for (int i = 0; i <= n; i++)
    {
        prime[i] = true;
    }

    sieveOfEratosthenes(n, prime);

    cout << "Prime numbers between 0 and " << n << ": ";
    for (int p = 2; p <= n; p++)
    {
        if (prime[p] == true)
        {
            cout << p << " ";
        }
    }
    cout << endl;

    return 0;
}
