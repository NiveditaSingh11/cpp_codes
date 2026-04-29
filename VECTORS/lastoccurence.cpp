#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(6);
    for(int i=0;i<6;i++){
        cin>> v[i];
    }
    int x;
    cout<<"enter x:";
    cin>>x;

    int occurence =-1;
    for(int i=0;i<v.size();i++){
        if((v[i] ^ x)==0){
            occurence =i;
        }
    }
    cout<<occurence<<endl;

    return 0;

}