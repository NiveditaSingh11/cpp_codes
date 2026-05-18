#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int max = INT_MIN;
    int smax = INT_MIN;
    int n;
    cout << "enter the size of array :";
    cin >> n;
    int arr[n];

    int i = 0;
    while (i < n)
    {
        cout << "enter the element :";
        cin >> arr[i];
        i++;
    }

    i = 0;
    while (i < n)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
        i++;
    }
    cout << "the maximum of all elements:" << max << endl;
    cout << "the second largest number :" << smax;

    return 0;
}