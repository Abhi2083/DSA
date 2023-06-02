#include <iostream>
using namespace std;
long long int Sqrtint(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
            // return ans;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
        long long int k;
        cout << "____**--Square root calculator--**____" << endl;
        cout << "Enter the number :- ";
        cin >> k;
        int tempSol = Sqrtint(k);
        cout << "The Square root is " << morePrecision(k, 3, tempSol) << endl;
         cout << "____**--Square root calculator ends--**____" << endl;

        cout << endl;
    
    return 0;
}