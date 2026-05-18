#include <iostream>
#include <vector>
using namespace std;
int findPeak(vector<int> &arr){
    int lo=0;
    int hi = arr.size()-1;
    if(arr.size() == 1) return 0;
    while(lo<hi){
        int mid =lo+ (hi-lo)/2;
        if(arr[mid] > arr[mid+1]) hi = mid;
        else lo= mid+1;
    }
    return lo;
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin >> n;
    vector <int> arr(n);
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element:";
        cin >>arr[i];
        i++;
    }

    cout<< findPeak(arr);
    return 0;
}

//this code assumes that if you move towards greater neighbour , you must eventually reach the peak;