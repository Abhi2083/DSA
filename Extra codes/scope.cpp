#include<iostream>
using namespace std;
 int main()
{
    int a = 3;
    cout << a << endl;
     
     if (true){
         int a = 5;
         cout << a << endl;
     }

     cout << a << endl;



     if(1){
         int a;
         if(1){
             int a;
             if(1){
                 int a;
                 if(1){
                     int a; // we can redeclare the declared variable again in a scope but it will not work outside the scope  
                 }

             }
         }
     }
    cout<<endl;
    return 0;
}