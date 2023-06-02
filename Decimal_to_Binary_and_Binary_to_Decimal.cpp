#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //Decimal to Binary 
    int n;
    cin >> n;
                        // something wrong not going correct
    int ans = 0;
    int i = 0;
    while (n != 0)
    {

        int bit = n & 1;

        ans = (bit * pow (10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << " Answer is " << ans << endl;

    //Binary to Decimal

    int a;
    cin >> a;

    int ans = 0;
    int i = 0;
    while (a != 0)
    {

        int digit = a % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        a = a / 10;
        i++;
    }
    cout << ans << endl;
}