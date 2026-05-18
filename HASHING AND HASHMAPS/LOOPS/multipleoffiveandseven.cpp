#include <iostream>
using namespace std;
int main (){
    int i=5;
    while (1){
        if (i%7==0){
            break;
        }
        i=i+5;
    }
    cout << i;

      
    return 0;
}