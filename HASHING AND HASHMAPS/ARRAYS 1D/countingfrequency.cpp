#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter the element:";
        cin >>arr[i];
    }

    bool visited[5] ={false} ;
    for(int i=0; i<5;i++){
        if(visited[i]) continue;

        int count = 1;
        for(int j=i+1;j<5;j++){
            if((arr[i] ^ arr[j])==0){
                visited[j]=true;
                count ++;
            
            }
        }

        cout<<arr[i]<<":"<<count<<endl;

    }

    return 0;
}