#include <bits/stdc++.h>
using namespace std;
class Cricketer {
public:
     string name;
     int runs;
    
     Cricketer (string name , int runs){
        this->name =name;
        this->runs=runs;
     }
};



int main(){

    Cricketer c1("virat kohli", 25000);
    Cricketer* c2 = new Cricketer("ms dhoni", 22000);//preferable !!
    
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<(*c2).name<<" "<<(*c2).runs<<" "<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;//preferable 


     int *arr = new int[5];
    // can use this dynamic array without any complication !!
    return 0;
}