#include <iostream>
using namespace std;
void multiple (int n , int k , int i){
    if(i>k) return ;
    cout << n*i<<endl;
    return  multiple(n , k, i+1);

}
int main(){
    int n;
    cout<<"enter the number:";
    cin>> n;

    int k;
    cout<<"enter number of times:";
    cin >>k;

    multiple (n ,k, 1);

    return 0;
}