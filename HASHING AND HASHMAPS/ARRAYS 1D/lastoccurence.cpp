#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int x;
    cout << "enter the number whose occurence is to be checked :";
    cin >> x;
    int arr[n];

    int i = 0;
    while (i < n)
    {

        cout << "enter the elements of array:";
        cin >> arr[i];
        i++;
    }
    int lastidx = 0;
    i = 0;
    while (i < n)
    {
        if ((arr[i] ^ x) == 0)
        {
            lastidx = i;
        }

      
        i++;
    }

    cout << "index of position of last occurence:" << lastidx << endl;
      if (lastidx == -1)
        {
            cout << "element not found!!";
        }

    return 0;
}