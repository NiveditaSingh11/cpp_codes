#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
void countSort(vector <int> &arr , int pos){
    int n= arr.size();
    vector <int> freq(10, 0);
    for(int i=0; i<n;i++){
        freq[(arr[i]/pos) %10] ++;
    }

    for(int i=1; i<10 ;i++){
        freq[i] += freq[i-1];
    }

    vector <int> ans(n) ;

    for(int i=n-1; i>=0;i--){
        ans[--freq[(arr[i]/pos) % 10]] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = ans[i];
    }
}
void radixSort (vector <int> &arr){
   int  n= arr.size();
    int max_ele = INT_MIN;

    for(int i=0;i<n;i++){
        max_ele = max(arr[i], max_ele);
        
    }
    cout<<max_ele<<endl;

    for(int pos= 1; max_ele/ pos>0;pos*=10){
        countSort (arr, pos);
    }
}


int main(){
    int n;
    cout<<"enter the size of array :";
    cin >>n;

    vector<int> arr(n);

    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element:";
        cin >>arr[i];
        i++;
    }

    radixSort (arr);
    i=0;
    while(i<n){
        cout<<arr[i]<<"  ";
        i++;
    }

    
    return 0;
}