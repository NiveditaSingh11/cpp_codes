#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter the month number:";
    cin >> m;
    string month;
    string season;

    if (m <= 12 && m >= 1)
    {
        switch (m)
        {
        case 1:
            month = "january";
            cout << "january" << endl;
            break;
        case 2:
            month = "february";
            cout << "february" << endl;
            break;
        case 3:
            month = "march";
            cout << "march" << endl;
            break;
        case 4:
            month = "april";
            cout << "april" << endl;
            break;
        case 5:
            month = "may";
            cout << "may" << endl;
            break;
        case 6:
            month = "june";
            cout << "june" << endl;
            break;
        case 7:
            month = "july";
            cout << "july" << endl;
            break;
        case 8:
            month = "august";
            cout << "august" << endl;
            break;
        case 9:
            month = "september";
            cout << "september" << endl;
            break;
        case 10:
            month = "october";
            cout << "october" << endl;
            break;
        case 11:
            month = "november";
            cout << "november" << endl;
            break;
        case 12:
            month = "december";
            cout << "december" << endl;
            break;
        }

        if (m == 12 || m == 1 || m == 2)
        {
            cout << "winter season";
        }
        else if (m == 3)
        {
            cout << "spring";
        }
        else if (m <= 7 && m >= 4)
        {
            cout << "summer";
        }
        else if (m == 8 || m == 9)
        {
            cout << "monsoon";
        }

        else
        {
            cout << "autumn";
        }
    }
    else
    {
        cout << "invalid month number !!";
    }
    return 0;
}