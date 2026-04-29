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
    head=new_node;
}

void display(Node* &head){
    Node* temp= head;
    while(temp !=NULL){
        cout<<temp->val<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* reverseLinkedList(Node* &head){
   // base case
   if(head==NULL || head->next==NULL) return head ;
    //recursive case :
    Node* new_head=  reverseLinkedList(head->next);
    head->next->next=head; //next node should point back to the current node !!
    head->next =NULL;
    return new_head;


}

int main(){
    Node* head=NULL;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,8);
    insertAtHead(head,9);
    display(head);
   head  = reverseLinkedList(head);
    display(head);
    return 0;
}

//reverse the rest of the list attach current node at the end!!

//reverse (head->next)
//make next node point back to the head
//break old link !!
