#include <bits/stdc++.h>
using namespace std;
bool checkIsomorphic(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    
    unordered_map<char,char> m;
    
    // for checking many to one mapping fromm s1->s2
    for(int i=0;i<s1.length();i++){
        if(m.find(s1[i]) != m.end()){ //character hamare map mein present hai 
            if(m[s1[i]] != s2[i]){
                return false;
            }
        }
        else{
            m[s1[i]] = s2[i];
        }
    }
    
    
    m.clear();
    //for checking one to many mapping from s2->s1
    for(int i=0;i<s2.length();i++){
        if(m.find(s2[i]) != m.end()){ 
            if(m[s2[i]] != s1[i]){
                return false;
            }
        }
        else{
            m[s2[i]] = s1[i];
        }
    }
    
    return true;
    
}
int main(){
    string s1,s2;
    cout<<"enter the first string :";
    cin>>s1;
    cout<<"enter the second string :";
    cin>>s2;
    
    
    if(checkIsomorphic(s1,s2)){
        cout<<"is isomorphic";
    }
    else{
        cout<<"not isomorphic";
    }
    return 0;
}   