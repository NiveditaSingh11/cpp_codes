#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    if (num > 0)
    {
        if ((num % 2 == 0) && (num %3)==0){
            cout <<" number is even and divisible by 3";
        }

     else if((num %2 ==0) && (num %3) !=0){
        cout<<"number is even but not divisible by 3";
       }
       else if ((num %2 !=0) && (num %3)==0){
        cout << "number is odd and divisible  by 3";
       }

      else {
        cout <<" number is odd and not divisible by 3";
      }
    }
    else
    {
        cout << "invalid output!!";
    }
    return 0;
}