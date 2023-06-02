#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Initialize of vector
    vector<int> v;
    // Initialize of vector with 1
    vector<int> a(5, 1);
    cout << "Vector(a) elements are:- ";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
 
    // copying a vector value in other vector
    vector<int> last(a);
    cout << "Vector(last) elements are:- ";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity -> " << v.capacity() << endl
         << endl;
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    cout << "Vector elements are:- ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size:- " << v.size() << endl << endl;
    v.push_back(1);
    v.push_back(8);
    cout << "Vector elements are (before pop):- ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // cout << "Capacity -> " << v.capacity() << endl;
    // cout << "Size:- " << v.size() << endl
    //      << endl;

    cout << "element at third index is - " << v.at(3) << endl;
    v.pop_back();
    v.pop_back();
    cout << "Vector elements are (after pop):- ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Front element is:- " << v.front() << endl;
    cout << "Back element is:- " << v.back() << endl;
    cout << endl;

    cout << "Before clear size:- " << v.size() << endl;
    v.clear();
    cout << "After clear size:- " << v.size() << endl
         << endl;

    v.begin();
    return 0;
}