#include <iostream>
#include <vector>
using namespace std;
int lowerbound(vector<int> &arr, int target ){
    int lo= 0;
    int hi= arr.size()-1;
    int ans =-1;
    while(lo<= hi){
        int mid = lo+(hi-lo)/2;

        if(arr[mid]>= target ){
            ans = mid;
            hi = mid-1;
        }

        else{
            lo = mid+1;
        }
    }
    return ans;

    
}

int upperbound (vector<int> &arr, int target ){
    int lo= 0;
    int hi= arr.size()-1;
    int ans=-1;
    while(lo<= hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]>target){
            ans =mid;
            hi =mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return ans;
}
int main(){

    int n;
    cout<<"enter the size of array :";
    cin >>n;

    cout<<"enter the array elements in non-decreasing element!!!";
    cout<<endl;
    int target ;
    cout<<"enter the target :";
    cin >>target;

    vector<int> arr(n);
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >>arr[i];
        i++;
    }

    int first = lowerbound (arr, target);
    int ub= upperbound(arr,target);

    if(first==-1 || first >=arr.size() || arr[first] != target){
        cout<< "-1 , -1";

    }

    else{
        cout<<first <<" , "<<ub-1;
    }
    return  0;
}