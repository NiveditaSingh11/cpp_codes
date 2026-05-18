#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];

    int i=0;
    while(i<n){
        cout<<"enter element :";
        cin>>arr[i];
        i++;
    }

    
   
    char option;
    cout<<"enter y for entering query and n for not entering the query :";
    cin>> option;
  
   while(option =='y'){
    int query ;
    cout<<"enter the query:";
    cin>>query;

bool flag = false;
    i=0;
    while(i<n){
        if((arr[i]^query)==0){
            flag = true;
            break;
        }
        
        i++;
    }

    if(flag== true){
        cout<<"the query has been responded!!";
    }

    else{
        cout<<"the query has not been responded!!";
    }
    cout<<"enter y for another query!!";
    cin>>option;


   }
    return 0;
}