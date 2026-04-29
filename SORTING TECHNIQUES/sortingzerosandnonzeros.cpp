#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements:";
    cin >>n;

    int arr[n];
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin>>arr[i];
        i++;
    }
    int countZero = 0;
    i=0;
    while(i<n){
        if(arr[i]==0) countZero = countZero+1;
        i++;
    }

    cout<<countZero<<endl;;
    int countNonZero =(n- countZero );
cout<<endl;
    cout<<countNonZero;
    cout << endl;

int idx =0;
for(int i=0;i<n;i++){
    if(arr[i]  != 0){
        arr[idx] = arr[i];
        idx++;  
    }
}
    for(int k=countNonZero; k<n ;k++){
        arr[k]=0;
    }
   

   i=0;
   while(i<n){
    cout<<arr[i]<<"  ";
    i++;
   }
    return 0;
}