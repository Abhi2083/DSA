#include <iostream>
using namespace std;
int main()
{
    // declaration // Initialization
    double number[] = {1,2,3,4,5,6,7,8,9};
   
   double sum = 0;
   double count = 0;
   double avarage;

   cout << "The numbers are:  ";

   for(const double &n : number){
    cout << n << " ";
   }

   sum += n;
   ++count;

   cout << "The sum is:- " << sum << endl;
   cout << "The Avarage is:- " << avarage << endl;
   
    return 0;


}  