#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "enter the number of day :";
    cin >> day;

    if (day > 0 && day < 8)
    {

        switch (day)
        {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        }
    }
    else
    {
        cout << "invalid day number";
    }
    return 0;
}