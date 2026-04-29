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

    i = 0;
    while (i < n)
    {
        if(i==0){
            arr[i]= arr[i];
            
        }

        else if(i>0 && i<n){
            arr[i]=arr[i] +arr[i-1];
        
        }
        i++;

    }
    i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }

    return 0;
}