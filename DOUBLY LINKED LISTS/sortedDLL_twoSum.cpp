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

void insertAtStart(Node* &head,Node* &tail,int val){
    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        tail=new_node;
        return ;
    }

    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}

void display(Node* &head){
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


vector<int> pairSum(Node* &head,Node* &tail,int x){
    vector<int> ans(2,-1);
    while(head!=tail){

        int sum =head->val + tail->val;
        if(sum==x){
            ans[0]=head->val;
            ans[1]=tail->val;
            return ans;
        }

        if(sum>x){ // i need smaller values so i would move my tail back 
            tail=tail->prev;
        }

        else{ // i  need bigger values so i would move my head forward
            head=head->next;
        }
    }

    return ans;
}
int main(){
    Node* head= NULL;
    Node* tail=NULL;
    insertAtStart(head,tail,10);
    insertAtStart(head,tail,8);
    insertAtStart(head,tail,6);
    insertAtStart(head,tail,5);
    insertAtStart(head,tail,2);
    //insertAtStart(head,tail,);
    display (head);

    vector<int> ans= pairSum(head,tail,11);
    cout<<ans[0]<<"  "<<ans[1];
    return 0;
}