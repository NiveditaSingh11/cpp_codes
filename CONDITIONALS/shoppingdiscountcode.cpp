#include <iostream>
using namespace std;
int main()
{
    double amount = 0.0;
    char menu;
    cout << "enter the choice for display of menu:";
    cin >> menu;

    while (menu == 'y')
    {
        cout << "1.electronic" << endl;
        cout << "2.food" << endl;

        char electronic;
        cout << "enter y for choosing electronic item :";
        cin >> electronic;

        while (electronic == 'y')
        {
            int option1;
            cout << "enter the option for electronic item :";
            cin >> option1;
            switch (option1)
            {
            case 1:
                // laptop ----> ₹ 94,000
                cout << "the price of laptop is ₹94000" << endl;
                amount = amount + 94000.0;
                break;

            case 2:
                // mobile ----> ₹24000
                cout << "the price for mobile is ₹24000" << endl;
                amount = amount + 24000;
                break;

            case 3:
                // heaphones ---->₹5000
                cout << "the price for headphones is ₹5000" << endl;
                amount = amount + 5000;
            }

            cout << "enter the choice (y) for electronic item:";
            cin >> electronic;
        }

        char food;
        cout << "enter y for choosing food item :";
        cin >> food;

        while (food == 'y')
        {
            int option2;
            cout << "enter the option for food item :";
            cin >> option2;

            switch (option2)
            {
            case 1:
                // maggiee ----->₹50
                cout << "the price for maggiee is ₹50" << endl;
                amount += 50;
                break;

            case 2:
                // pasta ---->₹60
                cout << "the price for pasta is ₹60" << endl;
                amount += 60;

                break;

            case 3:
                // pizza
                cout << "the price for pizza is ₹360" << endl;
                amount += 360;
            }
            cout << "enter the choice (y) for food item :";
            cin >> food;
        }
        break;
    }

    cout << amount;

    return 0;
}