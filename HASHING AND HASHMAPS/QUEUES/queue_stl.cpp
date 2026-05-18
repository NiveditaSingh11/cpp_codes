#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(60);
    q.push(20);
    q.push(50);
    q.push(70);
    while(!q.empty()){
        cout<<q.front()<<"  ";
        q.pop();
    }
    return 0;
}