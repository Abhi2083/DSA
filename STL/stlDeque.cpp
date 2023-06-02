#include<iostream>
#include<queue>
using namespace std;
 int main()
{
    deque <int> d;
    d.push_front(4);
    d.push_back(2);
    d.push_back(5);
    d.push_back(9);
    for(int i:d){
        cout << i << " " ;
    }
    cout<<endl;
    cout << "At 3:- "<< d.at(2)<<endl;
    d.pop_back();
    d.pop_back();
    for(int i:d){
        cout << i << " " ;
    }
    cout<<endl;
    cout << "Is deque emptty? "<<d.empty();
    cout<<endl;
    cout << "Front:- "<<d.front();
    cout<<endl;
    cout << "Back:- "<<d.back();
    cout<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d){
        cout << i << " " ;
    }
    return 0;
}