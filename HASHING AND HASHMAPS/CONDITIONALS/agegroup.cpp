#include <iostream>
using namespace std;
int  main(){
    int age;
    cout <<"enter the age :";
    cin >> age;

    if (age >0){

        if(age >18){
            cout <<"adult";
        }

        else if(age >=12 && age <=18){
            cout<< "teenager";
        }

        else {
            cout <<"child";
        }
    }

    else {
        cout <<"invalid age  number";

    }
    return 0;

}