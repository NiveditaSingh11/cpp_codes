#include <iostream>
#include <vector>
using namespace std;
int findMinimumInSortedRotated(vector<int> &arr ){
    if(arr.size()==1) return  arr[0];

    int lo =0;
    int hi= arr.size()-1;

    if(arr[lo]< arr[hi]){
        return lo;
    }
    while(lo <= hi){
        int mid= lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1])  return mid+1;
        if(arr[mid]<arr[mid-1]) return mid;
        if(arr[mid]>arr[lo])
            lo= mid+1;
        
        else  
            hi = mid-1;
    }

    return -1;
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin >>n;

    vector <int> arr(n);

    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element:";
        cin >> arr[i];
        i++;
    }

    cout<<"the index of minimum element in the sorted array :"<<findMinimumInSortedRotated(arr);
    
    return 0;
}
//let's go !!!