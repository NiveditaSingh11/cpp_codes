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
        cout<<"child1 class";
    }
};

class child2 :public Parent{
    public :
    child2(){
        cout<<"child2 class";
    }
};
int main(){
    child1 c;
    cout<<endl;
    child2 d;
    return 0;
}