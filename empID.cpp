#include<iostream>
using namespace std;
class Employee {
     
    public:
       int empID;
       string name;
       float salary;
       void set_Employee(int id,string n,float s){
        empID=id;
        name=n;
        salary=s;

       }
       void display_Employee();
    };
        void Employee::display_Employee() {
        cout<<"Employee ID:"<<empID
        <<",name:"<<name
        <<",salary:Rs."<<salary<<endl;
    }
    int main(){
        Employee e1,e2;
        e1.set_Employee(101,"sai",5000000.34);
        e2.set_Employee(102,"manoj",62000.66);
        e1.display_Employee();
        e2.display_Employee();
        return 0;
    }
    

    
