#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin >> n;
    vector<int> arr(n);
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >>arr[i];
        i++;
    }

    i=1;
    while(i<n-1){
        bool flag = false;
        if(arr[i-1]< arr[i] && arr[i] > arr[i+1]){
            flag = true;
        }
        if(flag) cout<< i <<"  ";
        i++;
    }
    

    return 0;
}