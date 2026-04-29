#include <iostream>
using namespace std;
int main (){
    int a , b;
    cout <<"a:";
    cin>>a;

    cout <<"b:";
    cin>> b;

    int c;
    c=b;
    b=a;
    a=c;
    
    cout << "a:"<<a<<endl;
    cout <<"b:" << b<<endl;
 
    // upar swap kara aur fir jab swap kara toh wapas se original number aa gaya !!
    a=a+b;
    b=a-b;
    a=a-b;

    cout <<"a:"<<a<<endl;
    cout <<"b:"<<b<<endl;

    
    return 0;
}