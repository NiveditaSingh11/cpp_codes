#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "enter grade :";
    cin >> grade;
    // A,B,C,D,F
    double gpa =-1;
 if(grade =='A'||grade =='B'||grade =='C'||grade =='D'||grade =='F'){
    switch (grade)
    {

    case 'A':
        gpa = 4.0;
        break;
    case 'B':
        gpa = 3.0;
        break;
    case 'C':
        gpa = 2.0;
        break;
    case 'D':
        gpa = 1.0;
        break;
    case 'F':
        gpa = 0.0;
        break;
   
    }
 }

 else {
    cout <<"invalid grade !!";
    return 0;
 }
    cout<<gpa;
    cout<<endl;

    if(gpa>=3.5){
        cout<<"excellent";
    }
else if(gpa>2.5 && gpa <3.5){
    cout<<"good";
}
else if(gpa < 2.5 && gpa >=1.5){
    cout <<"average";
}
else {
    cout <<"needs improvement !!";
}
    
    return 0;
}