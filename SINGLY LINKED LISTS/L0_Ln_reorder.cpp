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
    Node *temp =head;

    while(temp !=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* reorderLinkedList(Node* &head){
    //1.finding the middle element 
    Node* slow=head;
    Node* fast=head;

    while(fast !=NULL && fast->next!= NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    // slow is pointing to middle element!!
    //2.separate th liked list and reverse the second half 

    Node* curr=slow->next;
    slow->next=NULL;
    Node* prev= slow;

    while(curr != NULL){
        Node* nextptr = curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
//3. merging the two halves of the linked list
Node* ptr1=head; //for linked list first half
Node* ptr2=prev; // for linked list second half

while(ptr1 != ptr2){
    Node* temp= ptr1->next;
    ptr1->next =ptr2;
    ptr1=ptr2;
    ptr2=temp;
}

return head;
}
int main(){
    Node* head =NULL;
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    head=reorderLinkedList(head);
    display(head);
    return 0;
}