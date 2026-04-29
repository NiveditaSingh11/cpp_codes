#include <bits/stdc++.h>
using namespace std;
class Queue{
    int front;
    int  back;
    vector<int> v;
    int csize=0;
    int tsize;
    public:
    Queue(int n){
        tsize=n;
        v.resize(n);
        back = n-1;
        front = 0;
        csize=0;
    }

    void enqueue(int data){
        if(isFull()) return;
        back=(back+1) % tsize;
        v[back] = data;
        csize++;
    }

    void dequeue(){
       if(isEmpty()) return;

       front =(front+1)% tsize;
       csize--;
    }

    int getFront(){
        if(front ==-1){
            return -1;
        }
        return v[front];
    }

    bool isEmpty(){
        return csize == 0;
    }
    bool isFull (){
        return csize == tsize;
    }
};
int main(){
     Queue q (6);
    q.enqueue(10);
    q.enqueue(70);
    q.enqueue(40);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    while(! q.isEmpty()){
        cout<<q.getFront()<<"  ";
        q.dequeue();
    }
    return 0;
}