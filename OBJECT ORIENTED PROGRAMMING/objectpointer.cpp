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

void change( Cricketer *c){
    (*c) .name ="virat";
    c->name ="rohit"; 
}

int main(){
    Cricketer c1("ms dhoni", 22000);

    Cricketer *p1= &c1;
    cout<<(*p1).name<<" "<<(*p1).runs<<endl;
    cout<<c1.runs<<endl;
    (*p1).runs= 25000;
    cout<< c1.runs<<endl;


    change(&c1);
    cout<<c1.name<<" "<<c1.runs<<endl;
    return 0;
} 