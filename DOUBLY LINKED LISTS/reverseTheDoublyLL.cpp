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

void insertAtStart(Node* &head, Node* &tail,int val){
    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        tail=new_node;
        return;
    }

    new_node->next=head;
    head->prev=new_node;
    head=new_node;
    return;
}

void display (Node* &head){
    Node* temp= head;

    while(temp!= NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void reverse(Node* &head,Node* &tail){
    Node* currptr= head;
    while(currptr!=NULL){
        Node* nextptr = currptr->next;
        currptr->next=currptr->prev;
        currptr->prev = nextptr;
        currptr= nextptr;
    }

    Node* new_head=tail;
    tail= head;
    head=new_head;

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

    reverse(head,tail);
    display(head);
    
    return 0;
}