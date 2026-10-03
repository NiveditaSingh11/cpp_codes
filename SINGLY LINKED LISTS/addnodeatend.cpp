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
void insertAtTail(Node* &head, int val){
Node* new_node=new Node(val);

if(head==NULL){
    head= new_node;
    return;
}

Node *temp = head;
  
while(temp->next != NULL){// tab chalega jab temp ka next null hoga
   temp = temp->next;
}

temp->next = new_node;

}

void insertAtKthPosition(Node* &head, int val, int k) {

    // If k = 1, insert at head
    if (k == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);

    Node* temp = head;

    // Move to (k-1)th node
    for (int i = 1; i < k - 1; i++) {

        if (temp == NULL) {
            cout << "Invalid position!" << endl;
            delete new_node;
            return;
        }

        temp = temp->next;
    }

    // If position is beyond the list
    if (temp == NULL) {
        cout << "Invalid position!" << endl;
        delete new_node;
        return;
    }

    // Insert the new node
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){ 
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head =NULL;
    insertAtTail(head , 7);
    display (head);
    insertAtTail(head ,48);
    display(head);
    return 0;
}