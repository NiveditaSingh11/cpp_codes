#include <iostream>
using namespace std;
int main()
{

    int purpose;
    cout << "enter the purpose :";
    cin >> purpose;

    if (purpose >= 1 && purpose <=5)
    {

        switch (purpose)
        {
        case 1:
            // star pyramid
            int n;
            cout << "enter n:";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n - i; j++)
                {
                    cout << "#";
                }
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;

        case 2:
            int m;
            cout << "enter m:";
            cin >> m;
            for (int i = 1; i <= m; i++)
            {

                for (int j = 1; j <= i; j++)
                {
                    cout << j;
                }
                cout << endl;
            }
            break;

        case 3:
            int p;
            cout << "enter p:";
            cin >> p;
            for (int i = 1; i <= p; i++)
            {

                for (int j = 1; j <= 7 - 2 * i; j++)
                {
                    cout << "*";
                }

                cout << endl;
            }
            break;

        case 4:
            int q;
            cout << "enter q:";
            cin >> q;

            for (int i = 1; i <= q; i++)
            {
                for (int j = 1; j <= q; j++)
                {
                    if (i == 1 || i == q || j == 1 || j == q)
                    {
                        cout << "*";
                    }

                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
    }
    else
    {
        cout << "invalid output";
    }
    return 0;
}