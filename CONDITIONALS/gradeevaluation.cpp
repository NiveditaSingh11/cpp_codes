#include <iostream>
using namespace std;
int main(){
    int num1;
    cout << "enter the num1:";
    cin>> num1;
     int num2;
    cout << "enter the num2:";
    cin>> num2;
     int num3;
    cout << "enter the num3:";
    cin>> num3;
     int num4;
    cout << "enter the num4:";
    cin>> num4;
     int num5;
    cout << "enter the num5:";
    cin>> num5;

  
    if((num1<35)|| (num2<35)|| (num3<35) || (num4<35)||(num5<35)){
        cout <<"fail";
        return 0;
  }
    double percentage;
    percentage = ((num1+num2+num3+num4+num5)/500.0) *100.0;

   if(percentage >=90 && percentage <=100) {
        cout <<"distinction";
    }
      else if(percentage >=75 && percentage <90) {
        cout <<"first class";
    }
     else if(percentage >=50 && percentage <75) {
        cout <<"second class";
    }
     else if(percentage >=33 && percentage <50) {
        cout <<"pass";
    }
    else{
        cout<<"fail";
    }

    
    return 0;
}