#include <bits/stdc++.h>
using namespace std;
int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(8);
    st.push(9);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}