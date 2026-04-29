#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of vector :";
    cin>>n;
    vector <int> v(n);
    int i=0;
    while(i<n){
        cout<<"enter the element :";
        cin>>v[i];
        i++;
    }

    int count =0;
    int x;
    cout<<"enter the x:";
    cin>>x;

    i=0;
    while(i<v.size()){
        if((v[i] ^ x) ==0){
            count++;

        }
        i++;
    }


    cout<<"the desired number occured this much times :"<<count <<endl;
    return 0;
}