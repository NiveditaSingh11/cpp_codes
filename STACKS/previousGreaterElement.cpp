#include <bits/stdc++.h>
using namespace std;
vector<int> pge(vector<int> &arr){
    int n= arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i]>arr[st.top()] ){
            output [st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    } 
    reverse(output.begin(),output.end());
    reverse(arr.begin(),arr.end());
    return output;
}

vector<int> pgeModified(vector<int> &arr){
    int n=arr.size();
    vector<int> ans(n,-1);
    stack <int> st;

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }

        if(!st.empty()){
            ans[i] =arr[st.top()];
        }

        st.push(i);
    }

    return ans;
}

vector<int> pge_reversal(vector<int> &arr){
    int n=arr.size();
    vector<int> ans(n,-1);
    stack<int> st;

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[i]>arr[st.top()]){
            ans[st.top()]=arr[i];
            st.pop();
        }

        st.push(i);
    }

    return ans;
}
int main(){
        int n;
    cout<<"enter n:";
    cin >>n;

    vector<int> v;
    while(n--){
        int x;
        cout<<"enter the element:";
        cin>>x;
        v.push_back(x);
    }

    vector<int> res= pge_reversal(v);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"  ";
    }
    cout<<endl;
    return 0; 
} 