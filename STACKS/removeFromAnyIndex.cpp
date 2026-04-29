#include <bits/stdc++.h>
using namespace std;
void f(stack<int> &st,int idx,int n){
   
    if(st.size()== n-idx){
        st.pop();
        return;
    }
    int curr=st.top();
    st.pop();
    f(st,idx,n);
    st.push(curr);

}
void removeAnyIdx(stack<int> &st,int idx){
    stack<int> temp;
    int n=st.size();
    while(st.size() != n-idx){
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(! temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

   // int n=st.size();
   // f(st,2,n);

   removeAnyIdx(st,2);
    while(!st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<"  "<<endl;
    }
    return 0;
}