#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
void insertAtStart(Node* &head,Node* &tail ,int val){
    Node* new_node = new Node(val);
    if(head==NULL){
        head=new_node;
        tail= new_node;
        return ;
    }

    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}

void display(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtEnd(Node* &head,Node* &tail){

    if(head==NULL){
        return ;
    }

    Node* temp =tail;
    tail= tail->prev;
    if(tail==NULL){
        head= NULL;
    }

    else{
        tail->next=NULL;
    }

    delete temp;
}
int main(){
    Node* head= NULL;
    Node* tail=NULL;
    insertAtStart(head,tail,1);
    display (head);
    insertAtStart(head,tail,2);
    display (head);
    insertAtStart(head,tail,4);
    display (head);
    deleteAtEnd(head,tail);
    display(head);
    return 0;
}
