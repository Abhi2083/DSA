#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> a = {6, 7, 3, 9, 1};
    int size = a.size();
    cout << "Given array is :- ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout <<"Empty Array or Not :- " << a.empty()<<endl;
    cout << "First element of this array is :- " << a.front()<<endl;
    cout << "Last element of this array is :- " << a.back()<<endl;
    cout << "Element at 3rd index is :- " << a.at(3)<<endl;
    return 0;
}