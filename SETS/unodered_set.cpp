#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s1;

    s1.insert(24);
    s1.insert(8);
    s1.insert(87);
    s1.insert(48);
    s1.insert(57);
    s1.insert(48);
    s1.insert(0);
    s1.insert(48);

    for(auto value: s1){
        cout<<value<<" ";
    }
    cout<<endl;

    

    return 0;
}