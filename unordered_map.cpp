#include <bits/stdc++.h>
//#include <unordered_map> ---->header file 
using namespace std;
int main(){
    
    unordered_map<int, string> record;
    //roll number -> name
    
    record.insert(make_pair(3,"ria"));
    record[1] ="abhi";
    record[2]="mahi";
    
    for (auto pair: record){ //pair --> roll ,name
        cout<<pair.first<<"->"<<pair.second<<endl;
    }
    return 0;
}