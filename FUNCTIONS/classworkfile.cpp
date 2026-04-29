#include <iostream>
using namespace std;
//int  changevalue(int z){
 //   z=100;
  //  return z ;
//}
//int  main(){
    //int a=5;
   // changevalue (a);
  //  cout <<a;
  //  return 0;
//}

//int main(){
  //  int p=5;
   // int &q=p;
    //int &r=q;

   // cout <<q<<endl;
  //  q++;
    //cout <<p<<endl;
//    cout<<&p<<endl;
  //  cout <<&q<<endl;  
//      cout <<&r<<endl;

  //    cout<<r; 


 // void changeValue(int  &z){
   // z=100;
  //  return;
 //}
//int main (){

  //  int a =5;
    //changeValue (a);
 //   cout <<a;
   // return 0;


//}

int add(int a , int b=1, int c=5){
    return a+b+c;
}
int main(){

    cout <<add(6)<<endl;
    cout <<add(3,7)<<endl;
    cout <<add(8,5,6)<<endl;
        return 0;
}
  