#include <iostream>
#include <vector>
using namespace std;
int findMinimum(vector<int> &arr ){
    if(arr.size()==1) return  0;

    int lo =0;
    int hi= arr.size()-1;

    if(arr[lo]<= arr[hi]){
        return lo;
    }
    while(lo <= hi){
        int mid = lo+(hi-lo)/2;
        if( mid < hi && arr[mid]>arr[mid+1])  return mid+1;
        if(mid > lo && arr[mid]<arr[mid-1]) return mid;
        if(arr[mid] >= arr[lo])
            lo= mid+1;
        
        else  
            hi = mid-1;
    }

return lo;
}

int binarySearch (vector<int>&arr , int lo, int hi , int target ){
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;

        if(arr[mid] == target) return mid;
        else if(arr[mid]<target) lo = mid +1;
        else hi = mid-1;

    }
    return -1;
}

int search (vector<int>& arr , int target ){
    int n= arr.size();

    int pivot = findMinimum(arr);
    if(target >= arr[pivot] && target<= arr[n-1])   return binarySearch (arr, pivot , n-1, target);

    else return binarySearch(arr, 0, pivot-1,target );
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

    int target;
    cout<<"enter the target :";
    cin >>target ;
    cout<<"the index of minimum element in the sorted array :"<<search(arr, target );
    
    return 0;
}
//let's go !!!