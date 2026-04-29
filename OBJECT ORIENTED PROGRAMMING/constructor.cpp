#include <bits/stdc++.h>
using namespace std;

class Student { // Student is a new data type
    public:
    string name;
    int rno;
    float gpa;

    // constructor 

    Student (){ // default constructor !!

    }

    Student(string s, int r, float g){ //parameterised constructor 
         name =s;
         rno=r;
         gpa = g;

    }
    Student (string s, int r){
        name = s;
        rno=r;
    }

    Student (int r, string s, float g){
        name = s;
        rno=r;
        gpa = g;
    }  
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Student s1 ("nivedita" , 2559002,9.24); //uses 
    //s1.name="nivedita singh";
    //s1.rno=2559002;
    //s1.gpa =9.24;
    //cin>>s1.rno; 

   
    Student s2; // uses default constructor !!
    s2.name="ayush palav";
    s2.rno=2559001;
    s2.gpa =9.43;

    Student s3 ("ashmit" , 2559008);
    s3.gpa= 7.7;

    Student s4(2559006, "aditya" ,7.8);

    Student s5=s1; // deep copy !!
    s5.name ="nivedita singh";
 
    Student s6(s1); // copy constructor !! ---->deep copy 
    s6.name ="nivi";

    
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl;
    cout<<s6.name<<" "<<s6.rno<<" "<<s6.gpa<<endl;
    
 


    
    return 0;
}