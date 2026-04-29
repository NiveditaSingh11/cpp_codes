#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "enter the rows :";
    cin >> r;
    int c;
    cout << "enter the columns :";
    cin >> c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter the element:";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    int l1;
    cout << "enter the starting column number:";
    cin >> l1;

    int r1;
    cout << "enter the starting row number:";
    cin >> r1;

    int l2;
    cout << "enter the ending column number:";
    cin >> l2;

    int r2;
    cout << "enter the ending row number:";
    cin >> r2;
    int sum = 0;

    for (int i = (r1 - 1); i <= (r2 - 1); i++)
    {
        for (int j = (l1 - 1); j <= (l2 - 1); j++)
        {
            sum = sum + arr[i][j];
        }
    }

    cout << "the required sum = " << sum;
    return 0;
}