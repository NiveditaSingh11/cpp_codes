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

void display(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool isCriticalpoint(Node* &currNode){
    if((currNode->prev->val < currNode->val ) &&(currNode->next->val < currNode->val) ){
        return true;  //gives local maxima
    } 

    if((currNode->prev->val > currNode->val ) &&(currNode->next->val > currNode->val) ){
        return true;  // gives local minima
    }

    return false;
}
vector<int> distanceBetweenCriticalPoints(Node* &head,Node* &tail){

    vector<int> ans(2,INT_MAX);
    int firstCP =-1;
    int lastCP=-1;

    Node* currNode=tail->prev;
    if(currNode==NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }
    int currPos=0;
    while(currNode->prev !=NULL){
        if(isCriticalpoint(currNode)){
            if (firstCP==-1){
                firstCP =lastCP= currPos;
            }

            else{
                ans[0]=min(ans[0],currPos-lastCP); //min distance
                ans[1]=currPos-firstCP; //max distance
            }
        }
        currPos++;
        currNode=currNode->prev;
    }

    if(ans[0] == INT_MAX){
        ans[0] = ans[1]  = -1;
    }

    return ans;
}
int main(){

    Node* head= NULL;
    Node* tail=NULL;
    insertAtStart(head,tail,3);
    insertAtStart(head,tail,6);
    insertAtStart(head,tail,2);
    insertAtStart(head,tail,5);
    insertAtStart(head,tail,1);
    //insertAtStart(head,tail,1);
    display (head);
    vector<int> ans = distanceBetweenCriticalPoints(head,tail);
    cout<< ans[0]<< " "<<ans[1];
    return 0;
}  