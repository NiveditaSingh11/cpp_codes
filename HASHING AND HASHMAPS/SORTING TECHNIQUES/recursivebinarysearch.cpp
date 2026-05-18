#include <iostream>
#include <vector>
using namespace std;

int binarySearch (vector<int> &arr , int target , int lo ,int hi){
   // int mid=(lo + hi) /2;
   int mid = lo +(hi-lo)/2 ;
    if(arr[mid] == target ) {
        return  mid;
    }
   else if(arr[mid]<target) {
        return binarySearch (arr, target , mid+1, hi);
        }
    else  {
       return binarySearch (arr, target , lo, mid-1);
    }

return -1;


}

int main(){
    int n;
    cout<<"enter the number of elements of array:";
    cin >>n;
    cout<<"the array in sorted format !!"<<endl;
    int target ;
    cout<<"enter the target value:";
    cin >> target;
    vector<int> arr(n);
    int i=0;

    while(i<n){
        cout<<"enter the "<<i+1<<"th element : ";
        cin >>arr[i];
        i++;
    }

    cout<< binarySearch (arr , target , 0 , n-1);
    return 0;
}