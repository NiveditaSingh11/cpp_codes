#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    
    int i=0;
    int totalSum=0;
    while(i<n){
        cout<<"enter the element:";
        cin>>arr[i];
        totalSum += arr[i];

        i++;
    }

    cout<<"total sum of array:"<<totalSum<<endl;


    if((totalSum % 2)!=0) {cout<<"the subdivision is not possible !!";
        return 0;
    }

    int leftSum =0;
    i=0;
    while(i<n){
        leftSum = leftSum + arr[i];

        if(leftSum ==( totalSum/2) ){
            cout<<"this array can be broken down into 2 parts from i= 0 to i :"<<i<<endl;
            cout<<"first part"<<endl;
            for(int j=0;j<=i;j++){
                    cout<<arr[j]<<" ";
            }

            cout<<endl;
            cout<<"second part"<<endl;
            for(int j=i+1;j<n;j++){
                cout<<arr[j]<<" ";
            }
             }
        i++;
    }



  
    return 0;
}