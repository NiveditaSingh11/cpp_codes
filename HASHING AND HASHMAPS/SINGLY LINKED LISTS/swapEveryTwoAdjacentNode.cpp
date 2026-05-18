#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next; // stores address of next node

    Node (int data){
        val = data;
        next =NULL;
    }
};
void insertAtHead (Node* &head,int val){ 
    Node* new_node= new Node(val); 
    new_node->next = head;
    head = new_node;
}
void display(Node* head){
    Node* temp= head;
    while(temp !=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* swapAdjacent(Node* &head){
     
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* secondNode=head->next;
    head->next=swapAdjacent(secondNode->next);
    secondNode->next=head; // reversed the link between first and second node

    return secondNode;
}
int  main(){
    Node* head =NULL;
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    head=swapAdjacent(head);
    display (head); 
    return 0;
}