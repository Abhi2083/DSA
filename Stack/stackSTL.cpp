#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout << "Top element:- "<<  s.top() << endl;
    cout << s.empty() <<endl;
    cout << s.size();
    
    return 0;
}