#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class MinStack{
    public:
    stack <ll>st;
    ll min;
    MinStack(){
        this->min =INT_MAX;
    }

    void push(int val){
        if(this->st.empty()){
            this->min=val;
            this->st.push(0);
        }

        else{
            this->st.push(val - this->min);
            if(this->min > val){
                this->min =val;
            }
        }
    }

    void pop(){
        if(!this->st.empty()){

            if(this->st.top() >=0){
                this->st.pop();
            }

            else{
                this->min =this->min-this->st.top();
                this->st.pop();
            }
        }
    }

    int top(){
    if(st.empty()) return -1;

    if(st.top() >=0){
        return this->min+ st.top();
    }
    else{
        return this->min;
    }
}

    int getMin(){
        if(st.empty()) return -1;
        return this->min;
    }
};



    int main(){


    MinStack ms;

    ms.push(5);
    cout << "Top: " << ms.top() << " Min: " << ms.getMin() << endl;

    ms.push(3);
    cout << "Top: " << ms.top() << " Min: " << ms.getMin() << endl;

    ms.push(7);
    cout << "Top: " << ms.top() << " Min: " << ms.getMin() << endl;

    ms.pop();
    cout << "After pop -> Top: " << ms.top() << " Min: " << ms.getMin() << endl;

    ms.pop();
    cout << "After pop -> Top: " << ms.top() << " Min: " << ms.getMin() << endl;

    return 0;
}

