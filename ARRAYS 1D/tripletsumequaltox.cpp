#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];

    int i = 0;
    while (i < n)
    {
        cout << "enter the element:";
        cin >> arr[i];
        i++;
    }
    int x;
    cout << "enter the x:";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                if (((arr[i] + arr[j] + arr[k]) ^ x ) == 0)
                {
                    count++;
                }
            }
        }
    }

    cout << "total triplets equals to :" << count << endl;
    return 0;
}