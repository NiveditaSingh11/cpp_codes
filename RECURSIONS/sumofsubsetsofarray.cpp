#include <iostream>
using namespace std;
void f(int *arr, int n,int i, int currentSum){
   // int sum =0;
    if(i==n) {
        cout<< currentSum <<" ";
        return;
    }

     f(arr , n, i+1, currentSum +arr[i]);

     f(arr,n, i+1, currentSum);


}
int main(){
    int n; 
    cout<<"enter the length of array:";
    cin>>n;
    int arr[n];
    int i=0;
    while(i<n){
        cout<<"enter the element :";
        cin>> arr[i];
        i++;
    }
int currentSum =0;
    f(arr, n,0,0 );
    return 0;
}