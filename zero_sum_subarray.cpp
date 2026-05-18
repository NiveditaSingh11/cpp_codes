#include <bits/stdc++.h>
using namespace std;
int maxLengthZeroSumSubarray(vector<int>&v){

    unordered_map<int,int> m;
    int prefixSum=0;
    int maxLength=INT_MIN;
    for(int i=0;i<v.size();i++){
        prefixSum += v[i];

        if(prefixSum==0){
            maxLength++;
        }

        if(m.find(prefixSum)!= m.end()){
            maxLength =max(maxLength,i-m[prefixSum]);
        }

        else{
            m[prefixSum]=i;
        }
    }

    return maxLength;
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<"th element :";
        cin>>v[i];
    }

   cout<< maxLengthZeroSumSubarray(v)<< endl;
    return 0;
}