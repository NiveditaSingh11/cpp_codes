#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{

    int lo = 0;
    int hi = arr.size() - 1;

    while (lo <= hi)
    {
       // int mid = (lo + hi) / 2;

       int mid = lo + (hi-lo)/2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
        {
            // discard the left side of the mid
            lo = mid + 1;
        }

        else
        {
            // discard the right side of the mid
            hi = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;

    vector<int> arr(n);

    int target;
    cout << "enter the target element:";
    cin >> target;

    int i = 0;
    while (i < n)
    {
        cout << "enter the " << i + 1 << "th element of sorted array :";
        cin >> arr[i];
        i++;
    }

    cout << binarySearch(arr, target);

    return 0;
}