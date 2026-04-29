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

// assuming k is always less than or equal length of linked list!!
void removeKthNodeFromEnd(Node* &head , int k){
    Node* ptr1= head;
    Node* ptr2 =head;
    //move ptr2 by k steps !!
    int count=k;
    while(count--){
        ptr2=ptr2->next;
    }

    if(ptr2==NULL){ // k is equal to length of linked list 
        //we have to delete head node
        Node* temp= head;
        head= head->next;
        free (temp);
        return ;
    }

    // now ptr2 is k steps ahead of ptr1
    //while ptr2 is at null , ptr1 will be at node to be deleted
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    //node to be deleted is ptr1->next
    Node* temp=ptr1->next;
    ptr1->next= ptr1->next->next;
    free(temp);

}

int main(){
    Node *head= NULL;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,8);
    insertAtHead(head,9);
    display(head);

    removeKthNodeFromEnd(head,3);
    display (head);
    return 0;
}