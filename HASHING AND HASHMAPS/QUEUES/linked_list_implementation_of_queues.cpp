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

class Queue{
    Node* head;
    Node* tail;
    int size=0;

    public:
    Queue(){
        head= NULL;
        tail=NULL;
        size=0;
    }


    void enqueue(int data){
        Node* new_node =new Node(data);
        if(head== NULL){
            //LL is empty
            head = tail=new_node;
        }
        else{
            tail->next=new_node;
            tail=new_node;
        }
        size++;
    }

    void dequeue(){
        if(head==NULL){
            return;
        }
        Node* old_head = head;
        Node* new_head=head->next;
        head= new_head;
        if(head==NULL){
            tail=NULL;
        }
        old_head->next=NULL;
        delete old_head;
        size--;
    }

    int getSize(){
        return size;
    }

    bool isEmpty (){
        return head==NULL;
    }

    int front(){
        return head->val;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(70);
    q.enqueue(40);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    while(! q.isEmpty()){
        cout<<q.front()<<"  ";
        q.dequeue();
    }
    return 0;
}