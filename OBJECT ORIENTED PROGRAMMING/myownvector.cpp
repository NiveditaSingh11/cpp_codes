#include <bits/stdc++.h>
using namespace std;
class Vector{
    public:
    int size ;
    int capacity;
    int *arr;

    Vector(){
        size=0;
        capacity =1;
        arr = new int[1];
    }

void add(int ele){
    if(size==capacity) {
        capacity *=2;
        int *arr2 =new int[capacity];
        for(int i=0;i<size;i++){
            arr2[i]= arr[i];
        }
        delete[] arr;
        arr=arr2; //very very important!!
    }
        arr[size++]= ele;   
}

void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int get (int idx){
    if(size==0){
        cout<<"aray is empty"<<endl;
        return -1;
    }
    if(idx>=size || idx<0){
        cout<<"invalid index !!"<<endl;
        return -1;
    }
    return arr[idx];
}

void remove(){
    if(size==0){
        cout<<"aray is empty"<<endl;
    }
    size--;
}
};
int main(){
   

    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(10);
    v.print();

    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(20);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(30);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(50);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;

    cout<<v.get(10)<<endl;
    v.remove();
    v.print();
    return 0;
}