#include <iostream>
using namespace std;
bool f(int num , int *temp){
    if(num >=0 && num <=9){
        int lastDigitofTemp =(*temp)%10;
        (*temp) /= 10;
        return (num == lastDigitofTemp);
    }

    bool result = (f(num/10 , temp) && (num %10)==(*temp)%10);
    (*temp)/=10;
    return result;
}
int main(){
    int num ;
    cout<<"enter the number to be checked :";
    cin >>num ;
    int anotherNum = num;
    int *temp =&anotherNum;

    cout<<f(num , temp);
    return 0;
}