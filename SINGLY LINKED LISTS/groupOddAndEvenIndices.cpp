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
void insertAtHead (Node* &head,int val){ // refernce to head pointer and value to insert
    Node* new_node= new Node(val); // we dynamically create a node !!
    new_node->next = head;//connect new nodes to old heads
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
Node* groupOddAndEvenIndices(Node* &head){
    if(head == NULL){
        return head;
    }
    Node* evenhead= head->next;
    Node* oddPtr =head;
    Node* evenPtr = evenhead;

    while(evenPtr !=NULL && evenPtr->next !=NULL){
        oddPtr->next= oddPtr->next->next;
        evenPtr->next= evenPtr->next->next;
        oddPtr = oddPtr->next;
        evenPtr=evenPtr->next;
    }

    oddPtr->next=evenhead;
    return head;
}
int  main(){
    Node* head =NULL;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,8);
    insertAtHead(head,9);
    display(head);
    head= groupOddAndEvenIndices(head);

    display(head);
    return 0;
}