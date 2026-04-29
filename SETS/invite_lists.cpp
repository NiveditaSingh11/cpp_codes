#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> inviteList;
    int n;
    cout<<"enter number of names:";
    cin>>n;

    while(n--){
        string name;
        cout<<"enter the name: ";
        cin>>name;

        inviteList.insert(name);
    }

    for(auto name: inviteList){
        cout<<name<<endl;
    }
    return 0;
}