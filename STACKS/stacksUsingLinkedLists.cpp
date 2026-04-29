 #include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;

        public:
    Stack(int c){
        this->capacity=c;
        this->currSize=0;
        head=NULL;
    }


    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this-> currSize == this->capacity;
    }

    void push(int val){
        if(isFull()){
            cout<<"OVERFLOW"<<endl;
            return;
        }
        Node* new_node=new Node(val);
        new_node->next= head;
        head=new_node;
        currSize++;
    }


    int pop(){
        if(isEmpty()){
            cout<<"UNDERFLOW"<<endl;
            return INT_MIN;
        }

        Node* temp=head;
        head = head->next;
        int result = temp->val;
        delete temp;
        currSize--;
        return result;

    }

    int size(){
        return this->currSize;
    }
    int topElement(){
        if(isEmpty()){
            cout<<"UNDERFLOW"<<endl;
            return INT_MIN;
        }

        return head->val;
    }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.topElement()<<endl;
    st.push(4);
    st.push(5);
    cout<<st.topElement()<<endl;
    st.push(7);
    cout<<st.topElement()<<endl;

    return 0;
}