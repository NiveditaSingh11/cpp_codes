#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string , long long> directory ={{"Nivedita" , 6203533760} , {"Sanskriti" , 9279335057}};

    directory.insert({"Aditya" ,8440015562});
    directory.insert(make_pair("Reena" , 7004693153));
    directory["Ashmit"]=8409162848;

    //for(auto element: directory){
    //    cout<<element.first<<" "<<element.second<<endl;
    //}

    //map<string,long long>::iterator itr;
    //for(itr = directory.begin(); itr !=directory.end(); itr++){
    //    cout<<itr->first<<" "<<itr->second<<endl;
    //}

    map<string , long long >:: reverse_iterator itr;
    for(itr= directory.rbegin();itr!=directory.rend();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}
