#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows and columns:";
    cin>>n;
    int arr[n][n];
    
    int maxr =n-1;
    int minr=0;
    int minc=0;
    int maxc=n-1;
    int tne = n*n;
    int count =0;
    int num=1;

    while(count<tne ){
        for(int j =minc ;j<=maxc;j++){
            arr[minr][j] = num;
            cout<<arr[minr][j]<<" ";
            num++;
            count++;
        }
        if(count>=tne) break;

        minr++;
        for(int i=minr;i<=maxr;i++){
            arr[i][maxc]=num;
            cout<<arr[i][maxc]<<" ";
            num++;
            count++;
        }
        if(count >= tne ) break;
        maxc--;
        for(int j=maxc;j>=minc;j--){
            arr[maxr][j]= num;
            cout<<arr[maxr][j]<<" ";
            num++;
            count++;
        }
         if(count>=tne ) break;


        maxr--;
        for (int i=maxr ; i>=minr;i--){
            arr[i][minc]=num;
            cout<<arr[i][minc]<<" ";
            num++;
            count ++;
        }
        minc++;

 if(count>=tne ) break;
   }

    return 0;
}