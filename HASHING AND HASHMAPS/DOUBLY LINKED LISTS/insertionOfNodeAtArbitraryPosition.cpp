#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val= data;
        next=NULL;
        prev=NULL;
    }
};
void insertAtStart(Node* &head, Node* &tail ,int val){
    Node* new_node = new Node(val);
    if(head==NULL){
        head=new_node;
        tail=new_node;
        return ;
    }

    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}
void insertAtKthPosition(Node* &head, Node* &tail,int val,int k){
    //assuming k<= length of doubly linked list

    Node* temp =head;
    int count=1;//taking indexing as 1,2,3,4......

    while(count<k-1){
        temp=temp->next;
        count++;
    }

    //temp will be pointing to k-1 position 
    Node* new_node = new Node(val);
    new_node->next=temp->next;
     temp->next=new_node;

     new_node->prev =temp;
     new_node->next->prev= new_node;
     return;
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
    insertAtStart(head,tail,1);
    display (head);
    insertAtStart(head,tail,2);
    display (head);
    insertAtStart(head,tail,4);
    display (head);
    insertAtKthPosition(head,tail,7,2);
    display(head);


    return 0;
}