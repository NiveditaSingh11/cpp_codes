#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the row of pascal triangle :";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int first = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << first << " ";
            first = first * (i - j) / (j+1);
        }
        cout << endl;
    }
    return 0;
}