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
void insertAtStart(Node* &head,int val){
    Node* new_node =new Node(val);
    if (head==NULL){
        head=new_node;
        new_node->next=head;
        return ;
    }

    Node* tail=head;
    while(tail->next != head){
        tail=tail->next;
    }//tail is pointing to last node

    tail->next=new_node;
    new_node->next=head;
    head=new_node;
}
void insertAtEnd(Node* &head ,int val){
    Node* new_node = new Node(val);

    if(head==NULL){
        head=new_node;
        new_node->next=head;
        return ;
    }

    Node* tail=head;
    while(tail->next !=head){
        tail=tail->next;
    }
    //tail will be pointing to the last node

    tail->next=new_node;
    new_node->next=head;
}
void display(Node* &head){
    Node* temp=head;

    do{
        cout<<temp->val<<"->";
        temp=temp->next;
    }while(temp !=head);
}
int main(){
     Node* head=NULL;
    insertAtStart(head,8);
    insertAtStart(head,10);
    insertAtStart(head,6);
    insertAtStart(head,5);
    display(head);
    cout<<endl;

    insertAtEnd(head,7);
    display(head);
    return 0;
}