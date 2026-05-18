#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next =NULL;
    }
};

void insertAtHead(Node* &head , int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* &head){
    Node* temp=head;
    while(temp!= NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* findMiddleNode(Node* &head){
    Node* slow = head;
    Node* fast=head;

    while( fast !=NULL && fast->next !=NULL ){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);
    Node* middle = findMiddleNode(head);

    cout<<middle->val<<endl;

    return 0;
}