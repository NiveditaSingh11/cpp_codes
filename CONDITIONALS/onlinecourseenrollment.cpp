#include <iostream>
using namespace std;
int main()
{
    double amount;
    char willingness;
    cout << "enter the willingness for the course :";
    cin >> willingness;

    while (willingness == 'y')
    {

        cout << "1.C++ \n 2.Python \n3.Java" << endl;
        int choice;
        cout << "enter the choice :";
        cin >> choice;
        switch (choice)
        {

        case 1:
            cout << "chosen program is c++!! base price is 10000";
            amount += 10000;
            break;

        case 2:
            cout << "chosen program is python !! base price is 9000";
            amount += 9000;
            break;

        case 3:
            cout << "chosen program is java !! base price is 11000";
            amount += 11000;
        }
        cout << endl;
        cout << "enter the willingness :";
        cin >> willingness;
    }

    cout << "the total amount of the selected course without discount :" << amount << endl;

    int a = 1;

    while (a)
    {
        int discount;
        cout << "1.beginner \n2.prerequiste \n3.multiple course";
        cin >> discount;

        switch (discount)
        {
        case 1:
            // for beginners
            amount = amount * 0.9;
            cout << "the discounted price for beginners:" << amount << endl;
            break;

        case 2:
            // for prerequisite knowing
            amount = amount * 0.95;
            cout << "the discounted price for prerequisite group :" << amount << endl;
            break;

        case 3:
            // for multiple course enrollment
            amount = amount * 0.85;
            cout << "the discounted price for multicourse group :" << amount << endl;
            break;
        }
        a=0;
    }

    return 0;
}