#include <iostream>
#include <vector>
using namespace std;
bool canDistributeChocolate(vector<int> &arr, int mid ,int s){
    int n= arr.size();
    int studentsReqd =1;
    int currSum =0;
    for(int i=0; i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if((currSum + arr[i]) > mid) {
            studentsReqd++;
            currSum = arr[i];
            if(studentsReqd >s) return false ;
        }

        else {
            currSum += arr[i];
        }
    }

    return true;

}
int distributionOfChocolate (vector<int> &arr , int s){
    int n = arr.size();
    int lo =arr[0];
    int hi=0;

    for(int i=0; i<arr.size();i++){
        hi +=arr[i];
    }

    int ans =-1;
    while(lo<=hi){
        int mid= lo +(hi-lo)/2;
        if(canDistributeChocolate (arr, mid,s)){
            ans =mid;
            hi =mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number of boxes :";
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cout<<"enter the number of chocolates in each boxes :";
        cin >>arr[i];
    }   

    int s;
    cout<<"enter the number of students :";
    cin  >> s;

    cout<<distributionOfChocolate(arr, s);
     return 0;
}