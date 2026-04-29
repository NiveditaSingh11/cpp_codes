#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        next=NULL;
        val = data;
    }
};
void insertAtHead(Node* &head ,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head = new_node;
}

void deletionAtHead(Node* &head){
    Node* temp=head; //node to be deleted
    head =head->next;
    free(temp); // frees the memory occupied by this temp pointer !!
}

void display(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL;
    insertAtHead(head , 2);
    display (head);
    insertAtHead(head ,5);
    display(head);
    insertAtHead(head ,6);
    display(head);
    insertAtHead(head ,7);
    display(head);
    insertAtHead(head ,10);
    display(head);
    insertAtHead(head ,25);
    display(head);

    deletionAtHead(head);
    display(head);
    return 0;
}