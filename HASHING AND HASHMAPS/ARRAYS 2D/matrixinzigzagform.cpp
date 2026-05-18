#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n][n];
    int brr[n][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout<<"enter the element :";
            cin >>arr[i][j];

        }
    }

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i%2==0){
            brr[i][j] =arr[i][j];
        }

        else {
            brr[i][j]= arr[i][(n-1)-j];
        }
    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}