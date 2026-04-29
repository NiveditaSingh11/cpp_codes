#include <iostream>
using namespace std;
int main (){
    bool exp1 = true;
    bool  exp2 = false;

    cout <<(exp1 && exp2) <<endl;
    cout <<(exp1 || exp2)<<endl;
    cout << ( !exp1 )<<endl;
    cout <<(!exp2)<<endl;

    int exp3=1;
    int exp4=0;
    cout << (exp3 && exp4)<<endl;
    cout << (exp3 || exp4)<<endl;
    cout <<(!exp3)<<endl;
    cout <<(!exp4)<<endl;
    
    return 0;
}