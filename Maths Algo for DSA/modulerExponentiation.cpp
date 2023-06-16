// find (x^n)%m

#include <iostream>
using namespace std;
int ModulerExponentiation(int x, int n, int m)
{
    int result = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            result = (1LL * (result * (x) % m) % m);
        }
        x = ((1LL *  (x) % m * (x) % m) % m);
        n = n >> 1;
    }
    return result;
}
int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    cout << ModulerExponentiation(x, n, m);
    cout << endl;
    return 0;
}