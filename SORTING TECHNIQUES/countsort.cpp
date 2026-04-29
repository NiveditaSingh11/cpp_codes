#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
void countSort (vector <int> &arr){
    int n = arr.size();
    //cout<<n;

    //find the max element 
    int max_ele = INT_MIN;
    for(int i=0; i<n;i++){
        max_ele = max(arr[i], max_ele);
    }

    vector<int> freq(max_ele +1 , 0);
    for(int i=0; i<n;i++){
        freq[arr[i]] ++ ;
    }

    // calculate cumulative frequency 
    for(int i=1;i<= max_ele;i++){
        freq[i] += freq[i-1];
    }

    //calculate the sorted array
    vector<int> ans(n);
    for(int i= n-1; i>=0;i--){
        ans[--freq[arr[i]]] = arr[i];
    }

    // copy back the ans to original array 

    for(int i=0; i<n;i++){
        arr[i] = ans[i];
    }

}
int main(){
    int n;
    cout<<"enter the size of array :";
    cin >>n;

    vector <int> arr(n);

    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element:";
        cin >>arr[i];
        i++;
    }

    countSort (arr);

    i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}