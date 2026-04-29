#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int partition (vector<int>&arr , int l,int r){
    int pivot = arr[r];
    int i= l-1; 
    int j= l;
    for(; j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap (arr[i], arr[j]);
        }
    } 

    swap(arr[i+1], arr[r]);
    return i+1;
}
int kthSmallest(vector <int> &arr, int l, int r, int k){
    if(k>0 && k<= (r-l+1)){

      int  pos = partition (arr, l,r);

      if(pos== (k-1+l)) return arr[pos];

      else if((pos - l)>k-1) return  kthSmallest(arr , l, pos-1,k);

      else  return kthSmallest(arr , pos+1, r,k-(pos-l+1));
    }

    return INT_MAX;
}

int main(){
   
    int n;
    cout<<"enter the size of array :";
    cin >>n;

    vector <int> arr(n);
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >>arr[i];
        i++;
    }

    int k ; 
    cout<<"enter the number to be obtained :";
    cin >> k;
  
    cout << kthSmallest( arr , 0 , n-1, k)<< endl ;


    i=0;
    while(i<n){
        cout<<arr[i]<<"  ";
        i++;
    }

    return 0;
}