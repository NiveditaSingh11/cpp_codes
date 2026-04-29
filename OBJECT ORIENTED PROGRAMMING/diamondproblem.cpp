#include <iostream>
using namespace std;
class Parent{
public:
    Parent(){
        cout<<"parent class "<<endl;
    }
};

class child1 :public Parent{
    public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};

class child2 :public Parent{
    public :
    child2(){
        cout<<"child2 class"<<endl;
    }
};
class Grandchild: public child1 , public child2{
    public:
    Grandchild(){
        cout<<"grandchild class"<<endl;
    }
};
int main(){
    child1 c;
    cout<<endl;
    child2 d;
    cout<<endl;
    Grandchild e;
    return 0;
}