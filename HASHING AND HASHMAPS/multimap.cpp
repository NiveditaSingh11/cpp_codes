#include <bits/stdc++.h>
//#include <map> ---->header file 
using namespace std;
int main(){
    
     multimap<string ,int> directory;
    //roll number -> name
    
    
    directory.insert(make_pair("ria",45));
    directory.insert(make_pair("abhi",87));
    directory.insert(make_pair("mahi",96));
    directory.insert(make_pair("ria",53));
    
    
    
    for (auto pair: directory){ //pair --> roll ,name
        cout<<pair.first<<"->"<<pair.second<<endl;
    }
    return 0;
}   