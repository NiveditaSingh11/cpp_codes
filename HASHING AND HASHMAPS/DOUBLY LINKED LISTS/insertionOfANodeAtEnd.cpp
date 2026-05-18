#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val =data;
        next=NULL;
        prev =NULL;
    }
};

//void insertAtStart(Node* &head,Node* &tail, int val){
    //Node* new_node = new Node(val);
    //if(head==NULL){
    //head = new_node;
    //tail =new_node;
   // return;
   // }

   // new_node->next=head;
   // head->prev=new_node;
   // head=new_node;
    //return ;

//}


void insertAtTail(Node* &head,Node* &tail , int val){
    Node* new_node =new Node(val);

    if(tail==NULL){
        head=new_node;
        tail=new_node;
        return;
    }

    tail->next=new_node;
    new_node->prev=tail;
    tail=new_node;
}

void display(Node* &head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}
int main(){
    Node* head= NULL;
    Node* tail=NULL;
    insertAtTail(head,tail,1);
    display (head);
    insertAtTail(head,tail,2);
    display (head);
    insertAtTail(head,tail,4);
    display (head);

    return 0;
}