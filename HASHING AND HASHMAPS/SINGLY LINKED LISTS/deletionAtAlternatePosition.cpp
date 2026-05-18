#include <bits/stdc++.h>
using namespace std;
class Node{
 public:
 int val;
 Node* next;

 Node(int data){
    val= data;
    next=NULL;
}
};

void insertAtHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
          temp=temp->next;

    }
     cout<<"NULL"<<endl;
}

void deletionAtlternate(Node* &head){
    Node* curr_node=head;
    while(curr_node !=NULL && curr_node->next!= NULL){
        Node* temp=curr_node->next;//node to be deleted
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }
}
int main(){
    Node*head=NULL;
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
    deletionAtlternate(head);
    display(head);

    return 0;
}