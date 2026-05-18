#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter the rows:";
    cin>>row;
    int column;
    cout<<"enter the columns :";
    cin>>column;
    int arr[row][column];
    for(int i=0; i<row;i++){
        for(int j=0; j<column ; j++){
            cout<<"enter the elements of array:";
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<row ;i++){
        for(int j=0; j<column ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int brr[column][row];
    for(int i=0; i<column ;i++){
        for(int j=0;j<row ;j++){
            brr[i][j]=arr[j][i];
        }
    }


    for(int i=0; i<column ;i++){
        for(int j=0; j<row ;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}