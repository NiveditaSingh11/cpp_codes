#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> &arr , int target){
    int lo = 0;
    int hi = arr.size() - 1;

    int ans = -1;
    while(lo<= hi){
        int mid = lo+(hi - lo)/2;

        if(arr[mid]== target ){
            ans = mid;
            hi = mid -1;
        }

        else if(arr[mid]>target ){
            hi = mid -1;
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

    cout<<"enter the array in sorted format !!!"<<endl;

    int target ;
    cout<<"enter the target value:";
    cin >>target ;

    vector<int> arr(n);

    int i=0;
    while (i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >>arr[i];
        i++;
    }

    cout<<firstOccurence (arr, target);
    return 0;
}

//time complexity = O(log n )
//space complexity = O(1)

