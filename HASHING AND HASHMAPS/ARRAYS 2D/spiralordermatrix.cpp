#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the row:";
    cin >>r;
    int c;
    cout<<"enter the column:";
    cin>>c;

    int arr[r][c];
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter the element:";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
int minr=0;
int maxr=r -1;
int minc=0;
int maxc= c-1;
int count =0;
int tne=r*c;

while(count <tne){
    for (int j= minc ;j<=maxc;j++){
        cout<<arr[minr][j]<<" ";
        count++;
    }
    minr++;
if(count>= tne) break;
    for(int i=minr;i<= maxr;i++){
        cout<<arr[i][maxc]<<" ";
        count++;
    }
    maxc--;
    if(count>=tne) break;

    for(int j= maxc;j>=minc;j--){
        cout<<arr[maxr][j]<<" ";
        count++;
    }
    maxr--;
    if(count>=tne) break;

    for(int i=maxr;i>=minr;i--){
        cout<<arr[i][minc]<<" ";
        count++;
    }
    minc++;

    if(count >=tne ) break;
}


    return 0;
}
