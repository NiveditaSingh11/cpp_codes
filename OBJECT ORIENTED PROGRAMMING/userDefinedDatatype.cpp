#include <bits/stdc++.h>
using namespace std;

class Student { // Student is a new data type
    public:
    string name;
    int rno;
    float gpa;
   
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Student s1;
    s1.name="nivedita singh";
   // s1.rno=2559002;
    s1.gpa =9.24;
    cin>>s1.rno; 

   
    Student s2;
    s2.name="ayush palav";
    s2.rno=2559001;
    s2.gpa =9.43;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;

    
    return 0;
}