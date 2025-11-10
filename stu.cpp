#include<iostream>
using namespace std;
class student {
    public:
        string name;
        int rollno;
        float  marks;
        void display() {
            cout<<"name:"<<name
            <<",roll no:"<<rollno
            <<",marks:"<<marks<<endl;
        }
};
    int main(){
        student s1,s2,s3;
        s1.name="sai";
        s1.rollno=101;
        s1.marks=85.5;
        s2.name="manoj";
        s2.rollno=294;
        s2.marks=69;
        s3.name="raj";
        s3.rollno=33;
        s3.marks=22;
        s1.display();
        s2.display();
        s3.display();
        return 0;
    }