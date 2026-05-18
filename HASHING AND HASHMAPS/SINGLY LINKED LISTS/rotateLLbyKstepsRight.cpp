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
Node* rotatebyk(Node* &head,int k){
    int n=0;
    Node* tail=head;
    while(tail->next != NULL){ // for finding the tail node and length of linked list 
        n++;
        tail=tail->next;
    }
    n++; //for including last node


    k= k % n;
    if(k==0){
        return head;
    }

    tail->next=head;

    //traverse n-k nodes
    Node* temp=head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }

    //temp is now pointing to (n-k)th node!!
    Node* newhead=temp->next;
    temp->next=NULL;
    return newhead;
}
int main(){
    Node * head =NULL;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,8);
    insertAtHead(head,9);
    display (head);

head = rotatebyk(head , 3);
display(head);

    return 0;
}