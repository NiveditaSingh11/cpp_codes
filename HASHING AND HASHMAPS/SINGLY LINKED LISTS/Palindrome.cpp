#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next=NULL;
    }
};
void insertAtHead (Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head= new_node;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){ 
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool palindrome (Node* head){
     Node* slow = head;
    Node* fast=head;

    while( fast !=NULL && fast->next !=NULL ){
        slow=slow->next;
        fast=fast->next->next;
    }
    //slow is pointing to middle element 

    Node* curr=slow->next;
    Node* prev = slow;
    slow->next=NULL;

    while(curr != NULL){
        Node* nextNode= curr->next;
        curr->next=prev;

        prev=curr;
        curr=nextNode;
    }

    Node* head1=head;
    Node* head2=prev;

    while(head2){
        if(head1->val != head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
        
    }
    return true;

}
int main(){
    Node* head=NULL;
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,6);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    display(head);
    cout<< palindrome(head);

    return 0;
}

//1.find middle node !! slow fast pointer 
//2.break ll form middle node 
//3.reverse the second half of the ll /
//4. compare the two parts of ll

//always take care of even and odd conditions !!