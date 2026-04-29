#include <iostream>
#include <vector>
using namespace std;
int findPeak (vector<int> &arr){
    int n= arr.size();
    int lo=0;
    int hi= n-1;
   // int ans =-1;
   if(n==0) return -1;
   if(n==1) return 0;
    while(lo<hi){
        int mid= lo+(hi-lo)/2;
        if(mid==0){
            if(arr[mid] > arr[mid+1]) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if(mid == n-1){
            if(arr[mid] >arr[mid-1]){
                return n-1;
            }
            else {
                return n-2;
            } 
        }
        else {
            if(arr[mid] >arr[mid+1] && arr[mid] >arr[mid-1]){
                return mid;
            }
            else if(arr[mid] >arr[mid-1]){
                lo =mid+1;
            }
            else{
                hi = mid-1;
            }
        }
    }

    return -1;
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin >>n;
    vector<int> arr(n);

    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >>arr[i];
        i++;
    }

    cout<<findPeak(arr);

    return 0;
}