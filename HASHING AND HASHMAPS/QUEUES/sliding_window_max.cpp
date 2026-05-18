#include <bits/stdc++.h>
using namespace std;

vector<int> max_window(vector<int> &arr ,int k){

    deque<int> dq;
    vector<int> res;
    for(int i=0 ; i<k ; i++){
        while(!dq.empty() and arr[dq.back()]< arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    for(int i=k;i<arr.size();i++){
        int curr =arr[i]; 
        if(dq.front() == i-k ) dq.pop_front();

        while(not dq.empty() && arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
        return res;
}
int main(){
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = max_window(arr, k);

    for (int x : result) {
        cout << x << " ";
    }
    
    return 0;
}