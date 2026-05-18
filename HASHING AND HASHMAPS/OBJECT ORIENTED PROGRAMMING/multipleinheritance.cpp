#include <iostream>
using namespace std;
class Parent1{
    public :
    Parent1(){
        cout<<"parent1 class"<<endl;
    }
};
class Parent2{
    public:
    Parent2(){
        cout<<"parent2 class"<<endl;
    }
};

class child :public Parent1 , public Parent2{
    public:
    child(){
        cout<<"child class"<<endl; 
    }
};

int main(){
    child c;
    return 0;
}