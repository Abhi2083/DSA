#include <iostream>
using namespace std;
int main()
{
    // int num = 5;
    // cout << "Value of num:- " << num << endl;
    // cout << "Address of num:- " << &num;

    // cout << endl;

    // int *ptr = &num;
    // cout << "Value of num pointer:- " << *ptr << endl;
    // cout << "Address of num pointer:- " << ptr << endl;

    // // copying one pointer to another pointer....
    // int *q = ptr;
    // cout << ptr << "-" << q << endl;
    // cout << *ptr << "-" << *q << endl;

    // // Important concept
    // int i = 3;
    // int *p = &i;
    // // cout << (*p)++ << endl;
    // *p = *p + 1;
    // cout << *p << endl;

    // cout << p << endl;
    // p = p + 1; // points to the next location ex- in case of int if addresss is 100 then it points to 104
    // cout << p << endl;

    int a[3] = {1, 2, 3};
    cout << *(a + 2);
    return 0;
}