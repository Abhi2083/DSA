#include <iostream>
using namespace std;
long long int squareroot(int num) // long long int beacuse of bigger values beyond the range of int
{
    int start = 0;
    int end = num;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        else if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

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
    int n;
    cout << "Ether the no to find the square root:- ";
    cin >> n;
    int tempSol = squareroot(n);
    cout << "Square root is :- " << morePrecision(n,3,tempSol);
    cout << endl;
    return 0;
}