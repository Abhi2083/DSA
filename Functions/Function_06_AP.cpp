#include <iostream>
using namespace std;

int AP(int n)
{
    int ap = 3 * n + 7;
    return ap;
}
int main()
{
    int n;
    cout << "Enter the value of n :- ";
    cin >> n;

    int ans = AP(n);
    cout << "Result of ((3*n)+7) = " << ans << endl;

    cout << endl;
    return 0;
}