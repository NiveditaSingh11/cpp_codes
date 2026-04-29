#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * next;

    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertAtHead(Node* &head , int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head= new_node;
}

void display(Node * head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
bool detectCycle(Node* head){
    if(head==NULL) {
        return false;
    }
    Node* slow=head;
    Node* fast=head;

    while(fast !=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            cout<<slow->val<<endl;
            return true;
        }
    }
    return false;
}
void removeCycle(Node* &head){
    Node* slow=head;
    Node* fast=head;

    do{
        slow=slow->next;
        fast =fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    } 
    slow->next=NULL;
}
int main(){
    Node* head=NULL;
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);


    display(head);

    head->next->next->next->next->next->next->next->next=head->next->next;

    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    return 0;
}