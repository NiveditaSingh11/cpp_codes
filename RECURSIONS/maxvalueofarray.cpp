#include <iostream>
#include <climits>
using namespace std;

int f( int *arr, int i, int n){

    if(i==(n-1)) return arr[i]; 

    return  max(arr[i], f(arr,i+1,n));
}

int main(){
    int n;
    cout<<"enter the number of elements of array:";
    cin >>n;

    int arr[n];

    int i=0;
    while (i<n){
        cout<<"enter the element :";
        cin >>arr[i];
        i++;
    }

    cout<<"the maximum element of the array is:"<<f(arr ,0,n);
    return 0;
}