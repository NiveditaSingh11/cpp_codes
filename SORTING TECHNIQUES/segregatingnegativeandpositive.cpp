#include <iostream>
using namespace std;
void segregate (int arr[],int n ){

    int left =0;
    int right =n-1;

    while(left <= right){
        if(arr[left]<0)  left++;

        else if (arr[right]>=0) right--;

        else {
            swap(arr[left] , arr[right]);
            left ++;
            right--;
        }
    }

}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin >>n;

    int arr[n];

    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element:";
        cin >> arr[i];
        i++;
    }

    segregate (arr , n);
    i=0;
    while (i<n){
        cout<<arr[i]<<"  ";
        i++;
    }

    return 0;

}

// the relative ordering is not maintained !!
// biggest flaw yahi hai !! 