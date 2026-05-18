#include <iostream>
using namespace std;
int main()
{
    double amount = 0.0;
    char book;
    cout << "enter y for booking your ticket :";
    cin >> book;

    while (book == 'y')
    {
        cout << "1.economy" << endl;
        cout << "2.business" << endl;
        cout << "3.first class" << endl;
        int clas;
        cout << "choose the class :";
        cin >> clas;
        switch (clas)
        {
        case 1:
            cout << "chosen class is economy !! base price ₹15000"<<endl;
            amount += 15000;
            break;

        case 2:
            cout << "chosen class is business !! base price ₹25000"<<endl;
            amount += 25000;
            break;
        case 3:
            cout << "chosen class is first class !! base price ₹35000"<<endl;
            amount += 35000;
        }
        cout << endl;

        cout << "the total amount for the above booked tickets without discounts :" << amount << endl;

        int season;
        cout << "select the season: 1. peak , 2. off";
        cin >> season;

        switch (season)
        {
        case 1:
            amount = amount * 1.25;
            break;

        case 2:
            amount = amount;
        }

        int day;
        cout << "1. saturday , sunday \n 2. weekdays" ;
        cin >> day;
        switch (day)
        {
        case 1:
            amount = amount * 1.10;
            break;

        case 2:
            amount = amount;
        }

        int age;
        cout << "1.child < 12\n 2.adult\n3.senior citizen";
        cin >> age;

        switch (age)
        {

        case 1:
            amount = amount * 0.5;
            break;

        case 2:
            amount = amount;
            break;

        case 3:
            amount = amount * 0.85;
            break;
        }
        cout << "enter y for booking another ticket :";
        cin >> book;
    }
    cout << "the total amount after applying the dicounts if applicable :" << amount << endl;

    return 0;
}