#include <bits/stdc++.h>
using namespace std;
class Scooty { //parent class
    public :
    int topspeed;
    float mileage;
    private:
    int bootSpace ;

};

class Bike : public Scooty{ //derived class
    public:
    int gears;
};
int main(){
    Bike b1;
    b1.topspeed=180;
    b1.mileage=12.5;
    b1.gears=7;
   // b1.bootSpace=12; //can not use this
    return 0;
}