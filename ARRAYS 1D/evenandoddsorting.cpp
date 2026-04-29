#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int  arr[n];
    int brr[n];

    int i=0;
    while(i<n){
        cout<<"enter the element:";
        cin>>arr[i];
        i++;
    }

    int evenNum = 0;

    i=0;
    while(i<n){
        if((arr[i]%2)==0){
            evenNum++;
        }
        i++;
    }

    cout<<"number of even number:"<<evenNum<<endl;
    cout<<"number of odd number:"<< (n-evenNum)<<endl;

i=0;
while(i<n){
    if((arr[i]%2)==0){
        brr[i]=arr[i];
        cout<<brr[i]<<" ";
    }

    
    i++;
}
i=0;
while(i<n){
    if((arr[i]%2)!=0){
        brr[i]= arr[i];
        cout<<brr[i]<<" ";
    }
    i++;
}

    return 0;
}