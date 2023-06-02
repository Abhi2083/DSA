#include <iostream>
using namespace std;
int main()
{
    // Topic 1
    int a = 4;
    int b = 6;

    cout << "a&b = " << (a & b) << endl;
    cout << "a|b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "~b = " << (~b) << endl;
    cout << "a^b = " << (a ^ b) << endl;

    cout << endl;

    // Topic 2
    cout << (17 >> 1) << endl; // left shift
    cout << (17 >> 2) << endl; // left shift
    cout << (19 << 1) << endl; // Right shift
    cout << (21 << 2) << endl; // Right shift

    cout << endl;

    // Topic 3
    int i = 6, c = 4;

    cout << (c + (i++)) << endl;
    cout << (c + (++i)) << endl;
    cout << (c + (i--)) << endl;
    cout << (c + (--i)) << endl;

    cout << endl;

    // Q1-
    int x, y = 1;
    x = 10;
    if (++x)
    {
        cout << y;
    }
    else
    {
        cout << ++y;
    }

    cout << endl;
    cout << endl;

    // Q2 -
    int p = 1;
    int q = 2;

    if (p-- > 0 && ++q > 2)
    {
        cout << "Stage1 -Inside If ";
    }
    else
    {
        cout << "Stage2 - Inside else ";
    }
    cout << p << " " << q << endl;

    cout << endl;

    // Q3 -

    int number = 3;
    cout << (25 * (++number));

    // Q4-

    int d = 1;
    int e = d++;
    int f = ++d;
    cout << e;
    cout << f;

    return 0;
}