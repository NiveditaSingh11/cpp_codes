#include <iostream>
using namespace std;
int main()
{
    int total;
    cout << "enter the  total bank balance :";
    cin >> total;

    int balance;

    int withdraw;
    cout << "enter the withdrawal amount :";
    cin >> withdraw;
    int accountType;

    balance = total - withdraw;
if (balance <=1000){
    cout <<"invalid account type";
}
   else if(balance >=1000 && balance <=5000){
        accountType=0;
   }

   else {
    accountType=1;
   }

   if(accountType==0){
    cout << "savings";
   }
else {
    cout << "current account";
}
    return 0;
}