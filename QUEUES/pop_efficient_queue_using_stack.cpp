#include <bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> st;
    public:

    Queue() {}

    void push(int x){ // q.enqueue()
       stack<int> temp;
       while(!st.empty()){
        temp.push(st.top());
        st.pop();
       }
       st.push(x);
       while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
       }
    }

    void pop(){ //q.dequeue()
        if(st.empty()) return ;
        st.pop();
    }

    bool empty(){
        return st.empty();
    }

    int front(){
       if(st.empty()) return INT_MIN;
       return st.top();
    }
};
int main(){

    Queue q;
    q.push(10);
    q.push(60);
    q.push(20);
    q.push(50);
    q.push(70);
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<"  ";
        q.pop();
    }
    
    return 0;
}