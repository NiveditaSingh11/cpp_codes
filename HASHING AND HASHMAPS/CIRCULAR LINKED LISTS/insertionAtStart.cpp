#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next=NULL;
    }
};

void insertAtStart(Node* &head,int val){

    Node* new_node =new Node(val);
    if(head==NULL){
        head=new_node;
        new_node->next = head; //circular linked list
        return ;
    }

    Node* tail =head;
    while(tail->next != head){
        tail=tail->next;
    }
    //tail node is pointing to last node
    tail->next=new_node;
    new_node->next= head;
    head=new_node;

}

void display(Node* &head){
    Node* temp=head;
    do{
        cout<<temp->val<<"->";
        temp=temp->next;
    }while(temp !=head);
}
void printCircular(Node* &head){
    Node* temp=head;
    for(int i=0;i<15;i++){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    insertAtStart(head,10);
    insertAtStart(head,8);
    insertAtStart(head,6);
    insertAtStart(head,5);
    display(head);
    cout<<endl;
    insertAtStart(head,2);
    display(head);
    cout<<endl;
    printCircular(head);

    return 0;
}