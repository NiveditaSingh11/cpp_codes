#include <iostream>
using namespace std;
int main (){

    int num1;
    cout << "num1:";
    cin>> num1;
    int *p = &num1;

    float num2 = 8.976;
   
    cout << (sizeof(num1))<<endl;
    cout <<((num1==2)? num1=5:num1=7)<<endl;
    cout << (num1= 4,6,3)<<endl;
    cout << (&num1)<<endl;
    cout <<(*p=9)<<endl;

    cout << (int(num2))<<endl;
    cout <<(&num2)<<endl;
   
    return 0;
}