#include <iostream>
using namespace std;

int maze (int cr,int cc, int er , int ec) {
if(cr==er &&cc==ec) return 1;
if(cr>er || cc >ec) return 0;

return maze(cr , cc+1, er ,ec) +maze (cr+1, cc , er, ec);
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