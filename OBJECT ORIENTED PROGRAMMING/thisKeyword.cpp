#include <bits/stdc++.h>
using namespace std;
class Cricketer {
    public:
    string name;
    int runs;
    float avg;
    // constructor 

    Cricketer (string name, int runs, double avg){
        //name = n;
        //runs = r ; 
        //no error for this (string n, int r) 

        // but throws some random values for (string name, int runs)
        //name=name;
        //runs=runs;

        this->name=name;
        this->runs=runs;
        this->avg = avg;

    }
    void print(int runs){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        cout<<runs<<endl;
    }

    int matches (){
        return runs/avg;
    }
};
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

   // Cricketer c1;
   // c1.name ="virat kohli";
   // c1.runs=25000;
   Cricketer c1("virat kohli", 25000,55.5);
   Cricketer c2("rohit sharma", 18000,47.6); 

   //cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
   //cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<endl;


   c1.print(5);
   c2.print(9);

   cout<<endl;
   cout<< c1.matches()<<endl;
   cout<<c2.matches()<<endl;
    return 0;
}