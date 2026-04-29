#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    int brr[n];

    // array ko ya toh increasing rakhna hai ya constant !!!! <3
cout<<"sara elements array input mein increasing ya constant hona chahiye!!";
    int i=0;
    while(i<n){
        cout<<"enter element :";
        cin>>arr[i];
      
        i++;
    }
    i=0;
    while(i<n){
        brr[i] =(arr[i] * arr[i]);
        cout<< brr[i]<<" "<<endl;
        i++;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (brr[j]>brr[j+1]){
                int temp=brr[j];
                brr[j] = brr[j+1];
                brr[j+1] = temp;
            }
            
        }
    }
    i=0;
    while(i<n){
        cout<<brr[i]<<" ";
        i++;
    }


    return 0;
}