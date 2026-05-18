#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of aray :";
    cin>> n;

    int arr[n];
    int i=0;
    while(i<n){
        cout<<"enter the element :";
        cin>> arr[i];
        i++;
    }

    int x;
    cout<<"enter x:";
    cin >>x;
    int count =0;
  for(int j=0;j<n;j++){
    for(int k=j+1 ; k<n; k++){
        if(((arr[j] + arr[k])^x)==0)  
                count++;
    }
  }
cout<<"total number of pairs :"<<count<<endl;
    return 0;
}