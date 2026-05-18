#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];

    int sum=0;
    int idx =0;
    while(idx<n){
        cout<<"enter the  array element:";
        cin>>arr[idx];
        cout<<"entered array element is :"<<arr[idx]<<endl;
        sum = sum+arr[idx];
        idx++;
    }

    cout <<"the sum of all elements is:"<<sum<<endl; 
    return 0;
}