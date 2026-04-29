#include <iostream>
using namespace std;
class SUM {
    public:

    void add(int x, int y){
        int sum = x+y;
        cout<<sum<<endl;
    }
    void add(int x, int y, int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }

    void add(double x, double y){
        double sum = x+y;
        cout<<sum<<endl;
    }

};
int main(){
    SUM s;
    s.add(4.9,5.8);
    s.add(5,6,8);
    return 0;
}