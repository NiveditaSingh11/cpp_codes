#include <iostream>
#include <vector>
using namespace std;
int  binarySearchSortedRotated (vector<int> &arr , int target){
    int lo =0;
    int hi= arr.size() -1;

    while(lo<= hi){
        int mid = lo + (hi - lo)/2;
         if(arr[mid]== target) return mid;

         if(arr[mid] >= arr[lo]){
            if(target > arr[lo] && target <= arr[mid]){
                hi = mid-1;
            }
            else{
                lo = mid +1;
            }
         }
         else{
            if(target >= arr[mid] && target <= arr[hi]){
                lo = mid+1;
            }
            else{
                hi = mid -1;
            }
         }
    }
     
    return -1;
}
int main(){
    int n;
    cout<<"enter the size of array :";
    cin >>n;

    vector<int> arr(n);
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >> arr[i];
        i++;
    }

    int target ;
    cout<<"enter the target element:";
    cin >>target ;
    cout<< binarySearchSortedRotated (arr , target);
    return 0;
}