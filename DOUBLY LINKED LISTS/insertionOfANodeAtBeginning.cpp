#include <bits/stdc++.h>
using namespace std;
class Node{
    public:

    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
        prev= NULL;
    }

};

class DoublyLL{
    public:
    Node* head;
    Node* tail;
    DoublyLL(){
        head=NULL;
        tail=NULL;
    }

    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head =new_node;
            tail=new_node;
            return ;
        }

        new_node->next =head;
        head->prev= new_node;
        head = new_node;
        return;
    }

    void display(){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

};


int main(){
    DoublyLL dll;
    dll.insertAtStart(1);
    dll.display();
    dll.insertAtStart(2);
    dll.display();
    dll.insertAtStart(3);
    dll.display();
  
    return 0;
}