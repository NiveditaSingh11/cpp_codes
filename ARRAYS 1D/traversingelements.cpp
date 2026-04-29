#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int idx = 0;

    while (idx < 5)
    {
        cout << "enter the element of array:";
        cin >> arr[idx];
        cout << "the element is :" << arr[idx] << endl;
        idx++;
    }

    return 0;
}