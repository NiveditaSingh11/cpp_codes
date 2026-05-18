#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    string name;
    int price;
    int seats;

};
void print(Car c){
    cout<<c.name<<" "<<c.seats<<" "<<c.price<<endl;
}
void changecar(Car c){
    c.name ="ferrari";
}
void change(Car& c){
    c.name ="ferrari";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Car c1 ;
    c1.name="audi q8";
    c1.price= 15000000;
    c1.seats= 5;
    print(c1);
    changecar (c1);// pass by value !!
    print(c1);
    change (c1);// pass by reference !!
    print (c1);

    Car c2 ;
    c2.name="mercedes";
    c2.price= 22000000;
    c2.seats= 5;

    Car c3 ;
    c3.name="bmw m4";
    c3.price= 25000000;
    c3.seats= 5;
//we can print all the details of these objects !!


print(c2);
print(c3);

    return 0;
}