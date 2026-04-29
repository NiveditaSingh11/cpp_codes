#include <iostream>
using namespace std;
class Parent {
public:
    Parent(){
        cout<<"parent class"<<endl;
    }
};

class child: public Parent{
    public: 
    child(){
        cout<<"child class"<<endl;
    }
};

class grandchild: public child{
    public:
    grandchild(){
        cout<<"grandchild class"<<endl;
    }
};
int main(){
    grandchild gc;

    return 0;
} 