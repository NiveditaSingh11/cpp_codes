#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cout << "enter a:";
    cin >> a;

    double b;
    cout << "enter b:";
    cin >> b;

    int purpose;
    cout << "enter the purpose from 1 to 7:";
    cin >> purpose;

    if (purpose >= 1 && purpose <= 7)
    {

        switch (purpose)
        {
        case 1:
            double add;
            add = a + b;
            cout << add << endl;
            break;

        case 2:
            double sub;
            sub = a - b;
            cout << sub << endl;
            break;

        case 3:
            double multi;
            multi = a * b;
            cout << multi << endl;
            break;

        case 4:
            double div;

            if (b == 0)
                cout << "invalid operation !!";

            else
            {
                div = a / b;
                cout << div << endl;
            }
            break;

        case 5:
            double power;
            power = pow(a, b);
            cout << power << endl;
            break;

        case 6:
            double root;
            if (a < 0)
            {
                cout << "invalid operation !!";
            }

            else
            {
                root = sqrt(a);
                cout << root << endl;
            }
            break;

        case 7:
            double logarithm;
            if (a <= 0)
            {
                cout << "invalid operation";
            }
            else
            {
                logarithm = log(a);
                cout << logarithm << endl;
            }
            break;
        }
    }

    else
    {
        cout << "invalid input !!";
    }
    return 0;
}