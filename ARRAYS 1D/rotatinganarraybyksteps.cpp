#include <iostream>
using namespace std;

void change(int arr[], int si, int ei)
{

    int i = si;
    int j = ei;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];

    int i = 0;
    while (i < n)
    {
        cout << "enter element:";
        cin >> arr[i];
        i++;
    }
    int k;
    cout << "enter the steps by which array is to be rotated :";
    cin >> k;

    k = k % n;

    change(arr,0 ,n-1 );
     i = 0;
    while (i < n)
    {
        cout << arr[i];
        i++;
    }
    cout<<endl;
    change(arr,0,k-1);
     i = 0;
    while (i < n)
    {
        cout << arr[i];
        i++;
    }
    cout<<endl;
    change (arr , k, n-1);
    i = 0;
    while (i < n)
    {
        cout << arr[i];
        i++;
    }
    return 0;
}