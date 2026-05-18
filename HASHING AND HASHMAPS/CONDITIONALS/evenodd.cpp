#include <iostream>
using namespace std;
int main (){
    int num;
    cout <<"num:";
    cin >>num ;
    if (1<=num && num <=1000000){
        if(num %2==0){
            cout << "even number";         
        }
        else {
            cout <<"odd number";
        }
    }
    else {
        cout <<"not in range ";
    }
    return 0;

}