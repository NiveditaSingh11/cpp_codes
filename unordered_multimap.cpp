#include <bits/stdc++.h>
//#include <unordered_map> ---->header file 
using namespace std;
int main(){
    
    unordered_multimap<string , int> fruitcount;
    
    fruitcount.insert(make_pair("apple",6));
    fruitcount.insert(make_pair("banana",5));
    fruitcount.insert(make_pair("pear",7));
    fruitcount.insert(make_pair("grapes",4));
    fruitcount.insert(make_pair("apple",9));
    
    
    
    for (auto pair: fruitcount){ //pair --> fruit , count
        cout<<pair.first<<"->"<<pair.second<<endl;
    }
    return 0;
}  