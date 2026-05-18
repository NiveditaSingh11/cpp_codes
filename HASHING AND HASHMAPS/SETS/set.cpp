#include <bits/stdc++.h>
using namespace std;
int main(){
    //set<int, greater<int>> set1;

    set<int> set1;

    set1.insert(3);
    set1.insert(2);
    set1.insert(0);
    set1.insert(9);
    set1.insert(8);
    set1.insert(6);

    cout<< set1.size()<<endl;
    set1.insert(9);
    cout<< set1.size()<<endl;

    //size remain the same because duplicate element is added and set only contains unique values 
    
    set<int> :: iterator itr;

    for(itr= set1.begin() ;itr != set1.end() ;itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    for(auto value :set1){
        cout<<value<<" ";
    }
    cout<<endl;
 
    // deletion of elements

    //set1.erase(8);
    //auto i =set1.begin();
    //advance(i,4);
    //set1.erase(i);


    auto str_itr=set1.begin();
    str_itr++;
    auto end_itr=set1.begin();
    advance(end_itr,3);
    set1.erase(str_itr,end_itr);

    for(itr= set1.begin() ;itr != set1.end() ;itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    if(set1.find(9) !=set1.end()){
        cout<<"value is present"<<endl;
    }

    else{
        cout<<"value is not present"<<endl;  
    }



    return 0;
}