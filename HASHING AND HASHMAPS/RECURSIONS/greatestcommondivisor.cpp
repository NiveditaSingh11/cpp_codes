#include <iostream>
using namespace std;
int min(int a, int b){
    if(a>b) return b;
    else return a;
}

int gcd(int a, int b){
    int hcf ;
    int i= min(a,b);
    while(i>=1){
        if((a % i)==0 && (b % i)==0) {
            hcf =i;
            break;
        }
        i--;
    }
    
    return hcf;
}
int main(){
    int a;
    cout<<"enter the first number :";
    cin >>a;

    int b;
    cout<<"enter the second number :";
    cin>> b ;
    int hcf =gcd(a,b);
    cout<< hcf;
    return 0;

}