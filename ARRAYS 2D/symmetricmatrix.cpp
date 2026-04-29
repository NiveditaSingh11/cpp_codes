#include <iostream>
using namespace std;
int main(){
    //for a matrix to be symmetric ------>   matrix is required to be sqaure one !!
    int n;
    cout<<"enter the size of matrix:";
    cin >>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the element :";
            cin >>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    bool symmetric = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i][j]==arr[j][i]){
                symmetric = true;
                break;
            }
           
        }
    }
if(symmetric){
    cout<<"symmetric !!";
}
else{
    cout<<"asymmetric !!";
}
    
    return 0;
}

//bohot tagda code hai!!!