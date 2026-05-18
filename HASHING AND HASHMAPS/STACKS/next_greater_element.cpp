#include <bits/stdc++.h>
using namespace std;

vector<int> nge(vector<int> &arr){ //next greater element
    int n= arr.size();
    vector<int> output(n,-1);
    stack<int> st;  //indices

    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            output[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}

vector<int> nse(vector<int> &arr){  //next smaller element
    int n= arr.size();
    vector<int> output(n,-1);
    stack<int> st;  //indices

    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i] < arr[st.top()]){
            output[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
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

    vector<int> res= nge(v);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl<<endl;

     vector<int> res1= nse(v);

    for(int i=0;i<res1.size();i++){
        cout<<res1[i]<<" ";
    }
    return 0;
}