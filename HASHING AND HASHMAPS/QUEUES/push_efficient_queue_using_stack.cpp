#include <bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> st;
    public:

    Queue() {}

    void push(int x){ // q.enqueue()
        st.push(x);
    }

    void pop(){ //q.dequeue()

        if(st.empty()) return ;
        stack <int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }

        //stack size is now 1 and we are the bottom of the stack
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
 
    }

    bool empty(){
        return st.empty();
    }

    int front(){
        if(st.empty()) return -1 ;
        stack <int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }

       int result = st.top();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return result;
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