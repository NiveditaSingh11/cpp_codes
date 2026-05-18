#include <iostream>
using namespace std;
class Car {
public:

    string colour;
    string name ;

    Car (){
        colour ="Black";
        name ="BMW M4";
    }
    
    ~Car(){ // destructor
        cout<<"Destructor is called";
    }
};


int main(){
    Car c1;
    cout<< c1.name<<" "<<c1.colour<<endl;

     
    return 0;
}