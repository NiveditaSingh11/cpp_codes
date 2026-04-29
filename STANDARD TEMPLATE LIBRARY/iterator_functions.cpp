#include <bits/stdc++.h>
using namespace std;
int main(){
    list <int> l1={1,2,3,4};
    auto itr=l1.begin();
    //l1.end --> iterator pointing to the memory location after 4
    cout<<*itr<<endl;
    advance (itr,2);
    cout<<*itr<<endl<<endl;

    //using range based loop
    for(auto num: l1){
        cout<<num<<" ";
    }
    cout<<endl<<endl;
    for(auto itr=l1.begin();itr!= l1.end();itr++){
        cout<<*itr<<"  ";
    }
    cout<<endl;

   //reverse iterator 
   for(auto itr= l1.rbegin();itr!= l1.rend();itr++){
    cout<<*itr<<"  ";
   }
   cout<<endl;

   itr= l1.begin();
   advance (itr,2);
   l1.insert(itr,5);
     for(auto itr= l1.rbegin();itr!= l1.rend();itr++){
    cout<<*itr<<"  ";
   }
   cout<<endl;
    l1.insert(itr,3,6);
    for(auto itr=l1.begin();itr!= l1.end();itr++){
        cout<<*itr<<"  ";
    }
    cout<<endl;
   itr=l1.begin();
   auto l=l1.begin();
   auto r= l1.begin();
   advance(r,2);// r is pointing to 3
   l1.insert(itr,l,r);
     for(auto itr=l1.begin();itr!= l1.end();itr++){
        cout<<*itr<<"  ";
    }
cout<<endl;
    auto s_itr = l1.begin();
    advance (s_itr,2); //s_itr -> 3rd element

    auto e_itr=l1.begin();
    advance(e_itr,4);

    l1.erase(s_itr,e_itr);
     for(auto itr=l1.begin();itr!= l1.end();itr++){
        cout<<*itr<<"  ";
    }






    return 0;
}