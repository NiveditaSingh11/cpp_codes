#include <iostream>
using namespace std;
int sum(int *arr, int i, int n){

    if(i==(n-1)) return arr[i];

    return arr[i] + sum (arr,i+1,n);


}
int main(){
    int n;
    cout<<"enter the number of element of array:";
    cin>>n;

    int arr[n];
    int i=0;
    while (i<n){
        cout<<"enter the element:";
        cin>>arr[i];
        i++;
    }

    cout<<"the sum of elements of array:"<<sum(arr,0,n);

    return 0;

}