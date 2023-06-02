#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        if(b>a){
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter the numbers to find the gcd/hcf:- ";
    cin >> a >> b;

    int ans  = gcd(a,b);
    cout << "The GCD of " << a << " and " << b << " is " << ans <<endl
;
    cout << endl;
    return 0;
}