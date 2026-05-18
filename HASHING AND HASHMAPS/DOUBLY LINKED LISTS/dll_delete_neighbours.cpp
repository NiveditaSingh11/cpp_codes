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
void insertAtStart(Node* &head,Node* &tail,int val){
    Node* new_node =new Node(val);
    if(head==NULL){
        head=new_node;
        tail=new_node;
        return ;
    }
    new_node->next=head;
    head->prev=new_node;
    head= new_node;
}

void deleteSameNeighbourNode(Node* &head,Node* &tail){
    Node* currNode = tail->prev; //second last node

    while(currNode !=head){
        Node* prevNode = currNode->prev;
        Node* nextNode = currNode->next;

        if(prevNode!=NULL && nextNode != NULL && prevNode->val==nextNode->val){
            //i need to delete the curr node

            prevNode->next=nextNode;
            nextNode->prev=prevNode;
            delete currNode;
        }
        currNode=prevNode;
    }
}
void display(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){

    Node* head= NULL;
    Node* tail=NULL;
    insertAtStart(head,tail,2);
    insertAtStart(head,tail,1);
    insertAtStart(head,tail,1);
    insertAtStart(head,tail,2);
    insertAtStart(head,tail,1);
    //insertAtStart(head,tail,1);
    display (head);

    deleteSameNeighbourNode(head,tail);
    display(head);
    return 0;
}