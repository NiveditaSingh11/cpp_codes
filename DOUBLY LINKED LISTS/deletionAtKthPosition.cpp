#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }

};

void insertAtStart(Node* &head, Node* &tail,int val){
    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        tail=new_node;
        return;
    }

    new_node->next=head;
    head->prev=new_node;
    head=new_node;
    return;
}

void display (Node* &head){
    Node* temp= head;

    while(temp!= NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtKthPosition(Node* &head , Node* &tail,int k){

    //assuming k is less than or equal to length of doubly linked list 
    Node* temp= head; 
    int count=1;
    while(count< k){
        temp= temp->next;
        count++;
    }
//temp is pointing to node at kth position 
    
    temp->prev->next=temp->next;
    temp->next->prev= temp->prev;
    delete temp;

}

int main(){
    Node* head= NULL;
    Node* tail=NULL;
    insertAtStart(head,tail,1);
    display (head);
    insertAtStart(head,tail,2);
    display (head);
    insertAtStart(head,tail,4);
    display (head);

    deleteAtKthPosition(head,tail,3);
    display(head);
    return 0;
}