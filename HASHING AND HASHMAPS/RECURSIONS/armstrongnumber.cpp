#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    cout<<"enter the number to be checked:";
    cin >> n;
    int count =0;
    int y=n;
    int x;
    int z=n;
    int sum = 0;

    if(n>0 && n<10){
        cout<<"armstrong number !"<<endl;
    }

    while(y!=0){
        y = y/10;
        count ++;   
    }
     cout<<count<<endl ;

     while(n!=0){

        x=n % 10;
        sum = sum + (int)pow(x , count);
        n= n/10;
    }
    cout<<sum <<endl;
    if(sum == z){
        cout<<"armstrong number !!";
    }

   else {
    cout<<"not an armstrong number !!";
   }
    return 0;
}