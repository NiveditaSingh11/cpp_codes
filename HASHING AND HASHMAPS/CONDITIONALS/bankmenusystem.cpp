#include <iostream>
using namespace std;
int main()
{
    cout << "enter 1 for deposit, 2 for withdraw , 3 for checking balance, 4 for transfer , 5 for exit";
    int option;
    cout << "enter the desired opton:";
    cin >> option;

    double initialBalance;
    cout << "enter the initial balance :";
    cin >> initialBalance;

    int anotheraccount;
    cout << "enter the initial balance of this account :";
    cin >> anotheraccount;
    if (option >= 1 && option <= 5)
    {

        switch (option)
        {
        case 1:
            double amount;
            cout << "enter the amount to be deposited :";
            cin >> amount;
            if (amount <= 0)
            {
                cout << "invalid deposition !!";
            }
            else
            {
                initialBalance = initialBalance + amount;
                cout << initialBalance << endl;
            }
            break;

        case 2:
            double withdraw;
            cout << "enter the amount to be withdrawn :";
            cin >> withdraw;
            if (initialBalance <= 500)
            {
                cout << "withdrawal cannot happen !!";
            }

            else
            {
                initialBalance = initialBalance - withdraw;
            }

        case 3:
            cout << initialBalance << endl;
            break;

        case 4:
            double transfer;
            cout << "enter the amount to be transferred :";
            cin >> transfer;
            if (transfer > initialBalance)
                cout << "invalid transaction !!";
            else if (initialBalance <= 500)
            {
                cout << "transaction cannot happen !!";
            }

            else
            {
                anotheraccount = anotheraccount + transfer;
                initialBalance = initialBalance - transfer;
                cout << initialBalance << endl;
                cout << anotheraccount << endl;
                
            }
            break;

        case 5:
            cout << "exit" << endl;
        }
    }
    else
    {
        cout << "invalid optio choosen";
    }

    return 0;
}