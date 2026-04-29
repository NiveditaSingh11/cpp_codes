#include <iostream>
using namespace std;
int main()
{
    char crr[5];
    int idx = 0;
    while (idx < 5)
    {
        cout << "enter the element of the array:";
        cin >> crr[idx];
        cout << crr[idx];
        idx++;
    }

    return 0;
}