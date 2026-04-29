#include <iostream>
using namespace std;
int main()
{
    double unit;
    cout << "enter the units consumed :";
    cin >> unit;

    double rate;
    cout << "enter the rate:";
    cin >> rate;

    double bill = 0;
    if (unit < 0)
    {
        cout << "invalid unit !!";
        return 0;
    }

    if (unit >= 0 && unit <= 100)
    {
        bill = unit * rate;
    }
    else if (unit > 100 && unit <= 300)
    {
        bill = 100 * rate + (unit - 100) * 1.5 * rate;
    }

    else
    {
        bill = 100 * rate + 200 * 1.5 * rate + (unit - 300) * 2 * rate;
    }

    if (unit > 2000 && unit < 5000)
    {
        bill = bill * 1.10;
    }

    if (unit > 5000)
    {
        bill = bill + 500;
    }

    cout << "total bill :"<< bill <<endl;
    return 0;
}