#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next =NULL;
    }
};

void insertAtStart(Node* &head , int val){
    Node* new_node= new Node(val);

    if(head== NULL){
        head=new_node;
        new_node->next=head;
        return;
    }

    Node* tail=head;
    while(tail->next != head){
        tail=tail->next;
    }//tail is pointing to the last node

    tail->next=new_node;
    new_node->next=head;
    head=new_node;
}

void display(Node* &head){
    Node* temp=head;
    do{
        cout<<temp->val<<"->";
        temp=temp->next;
    }while(temp != head);
}

void insertAtKthPosition(Node* &head,int val, int pos){
    if(pos==0){
        insertAtStart(head , val);
        return ;
    }

    Node* new_node= new Node(val);
    Node* temp = head;
    int curr_pos=0;
    while(curr_pos != pos-1){
        temp = temp->next;
        curr_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;

}

void updateAtPosition(Node* &head,int pos,int new_val){
    if(head==NULL){
        cout<<"list is empty!!"<<endl;
        return ;
    }
    Node* temp=head;
    int count =1;
    do{
        if(count==pos){
            temp->val=new_val;
            return;
        }
        temp=temp->next;
        count++;
    }while(temp!=head);

    cout<<"position is out of range!!"<<endl;
}
int main(){
    Node* head=NULL;
    insertAtStart(head,10);
    insertAtStart(head,8);
    insertAtStart(head,6);
    insertAtStart(head,5);
    display(head);
    cout<<endl;

    insertAtKthPosition(head,7,2);
    display(head);
    cout<<endl;
    updateAtPosition(head,4,99);
    display(head);
    return 0;
}