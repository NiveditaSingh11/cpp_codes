#include <iostream>
using namespace std;
class Fruit{
    public:
    string name;
    string colour;
};


int main(){
    Fruit apple; // object 
    apple.name ="Apple";
    apple.colour="Red";
    cout<< apple.name<<"  "<< apple.colour<<endl;

    Fruit *mango =new Fruit();
    mango->name ="Mango";
    mango->colour="Yellow";
    cout<<mango->name<<" "<<mango->colour<<endl;


    return 0;
}