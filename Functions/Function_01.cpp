#include <iostream>
using namespace std;

// Using function

int power()
{
    int num1;
    int num2;
    cin >> num1 >> num2;

    int ans = 1;

    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    // int a,b;
    // cin >> a >> b;

    int ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;

    cout << endl;
    return 0;
}