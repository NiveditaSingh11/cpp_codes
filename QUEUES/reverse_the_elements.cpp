#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(60);
    q.push(20);
    q.push(50);
    q.push(70);
    cout<<endl;
    stack<int> st;
    while(!q. empty()){
        st.push(q.front());
        q.pop();
    }
    cout<<endl;
    
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<"  ";
        q.pop();
    }
    return 0;
}