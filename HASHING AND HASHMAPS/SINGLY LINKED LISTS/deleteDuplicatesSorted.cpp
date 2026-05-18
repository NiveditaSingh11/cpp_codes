#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        next=NULL;
        val=data;
    }
};

void insertAtHead(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* &head){
    Node* temp = head;
    while(temp !=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteDuplicate(Node* &head){
    Node * curr= head;
    while(curr != NULL && curr->next!= NULL){
        while( curr->next != NULL  && curr->next->next!= NULL && curr->val == curr->next->val){
            Node* temp = curr->next;
            curr->next = curr->next->next;           
            delete temp;
        }
         curr = curr->next;
    }
    
}
int main(){
    Node* head=NULL;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,4);
    insertAtHead(head,4);
    display(head);
    deleteDuplicate(head);
    display(head);
    return 0;
}