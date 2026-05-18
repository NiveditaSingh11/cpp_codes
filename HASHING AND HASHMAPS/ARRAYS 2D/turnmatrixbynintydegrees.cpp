#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the row and column:";
    cin>>n;
    int arr[n][n];
   int brr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the element :";
            cin>>arr[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            brr[i][j]=arr[j][i];
        //transpose!!
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";

        }
        cout<<endl;
    }


    cout<<endl;

    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp= brr[i][k];
            brr[i][k] = brr[i][j];
            brr[i][j]= temp;
            j++;
            k--;
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
//90 degree rotation !!!!
