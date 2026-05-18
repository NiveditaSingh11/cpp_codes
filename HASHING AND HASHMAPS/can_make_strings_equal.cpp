#include <bits/stdc++.h>
using namespace std;
bool canMakeEqual(vector<string> &v){
    
    unordered_map<char,int> m;
    
    for(auto str:v){ //for traversing the strings in the vector
        for(char c: str){ //for traversing the characters of each string 
            m[c]++;
        }
    }
    
    int n=v.size();
    for(auto ele:m){
        if((ele.second)%n != 0){
            return false;
        }
    }
    
    return true;
}
int main(){
    int n;
    cout <<"enter the number of strings : ";
    cin>>n;
    
    vector<string> v(n);
    for(int i=0; i<n;i++){
        cout<<"enter the "<<i+1<<"th element: ";
        cin>>v[i];
    }
    
   if(canMakeEqual(v)){
       cout<<"yes !!";
   }
   
   else{
       cout<<"no";
   }
    return 0;
    
}   