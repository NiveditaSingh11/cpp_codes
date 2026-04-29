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
int  main(){
    

    Node* head =NULL;
    insertAtHead(head , 2);
    display (head);
    insertAtHead(head ,5);
    display(head);
    return 0;
}
