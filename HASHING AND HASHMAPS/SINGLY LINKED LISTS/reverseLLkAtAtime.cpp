#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node (int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* &head){
    Node* temp= head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    } 
    cout<<"NULL"<<endl;
}

Node* reverseLL(Node* &head,int k){
    Node* prev=NULL;
    Node* curr =head;

    int count=0;
    while(curr!=NULL && count<k){//reversing first k node 
        Node* nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
        count++;
    }

    //curr will point to the (k+1)th node !!
    if(curr!=NULL){
        Node* new_head=  reverseLL(curr,k);
        head->next=new_head;
    }
        return prev; 
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
    head=  reverseLL(head,2);
    display(head);
    return 0;
}