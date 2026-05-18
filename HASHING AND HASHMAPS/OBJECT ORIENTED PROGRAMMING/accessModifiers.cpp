#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int rno;
    string name;

    Student (){

    }

    Student(int r , string n,float m ){
    rno=r;
    name =n;
    marks=m;
    }

    float getmarks(){ //getter
        return marks;
    }

    void setmarks(float m){ //setter 
        marks =m;
    }
    private :
    float marks;
};
int main(){
    Student s1(2559002,"nivedita" , 9.0);
    cout<<s1.getmarks()<<endl;
    s1.setmarks(9.24);
     cout<<s1.getmarks()<<endl;
    return 0;
}