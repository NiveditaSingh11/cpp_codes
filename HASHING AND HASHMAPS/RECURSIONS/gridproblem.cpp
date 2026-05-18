#include <iostream>
using namespace std;
int maze(int cr, int cc, int er, int ec){
    int rightWays =0;
    int downWays =0;

    if(cr == er && cc == ec)  return 1;
    if(cr==er) {
        rightWays += maze (cr, cc+1, er,ec);
    }
    if(cc ==ec){
        downWays += maze(cr+1 , cc, er,ec);
    }

    if(cr<er && cc <ec) {
        rightWays += maze (cr, cc+1, er,ec);
         downWays += maze(cr+1 , cc, er,ec);

    }

    int totalways = rightWays + downWays;

    return totalways;
}
int main(){
    int n;
    cout<<"enter the rows:";
    cin>>n;
    
    int m;
    cout<<"enter the columns:";
    cin >>m;

    int numberOfWays = maze(1,1,n,m);
    cout<< numberOfWays;
    return 0;
}

//optimised 
/* 

int maze (int cr,int cc, int er , int ec) {
if(cr==er &&cc==ec) return 1;
if(cr>er || cc >ec) return 0;

return maze(cr , cc+1, er ,ec) +maze (cr+1, cc , er, ec);
}
*/

//above 3 four lines are more optimised code !!!