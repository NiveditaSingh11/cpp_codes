#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector :";
    cin>>n;
    vector <int> v(n);
    int i=0;
    while(i<v.size()){
        cout<<"enter the element :";
        cin>>v[i];
        i++;
    }

    int x;
    cout<<"enter the number to be compared :";
    cin>>x;
    int count =0;
    i=0;
    while(i<v.size()){
        if(v[i]>x){
            count++;
        }
        i++;

    }
    cout<<"number of elements strictly greater than x:"<<count;
      

    return 0;
}