#include <iostream>
#include <vector>
using namespace std;
int peakInMountainArray(vector<int> &arr ){
    int lo = 0;
    int hi = arr.size()-1;
    //int ans =-1;
    while(lo < hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid+1]>arr[mid]){
            //increasing curve 
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    return lo;
}
int main(){
    int n;
    cout<<"enter the size of array :";
    cin >>n;

    vector<int> arr(n);
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >>arr[i];
        i++;
    }
    
    cout<<peakInMountainArray(arr);
    return 0;
}