#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_multiset<int> ms;

    ms.insert(3);
    ms.insert(1);
    ms.insert(8);
    ms.insert(99);
    ms.insert(24);
    ms.insert(34);

    for(auto value:ms){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}