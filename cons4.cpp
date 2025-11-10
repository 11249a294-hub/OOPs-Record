//c++ program to calculate the area of wall
#include<iostream>
using namespace std;
//declare a class
class wall {
    private:
    double length;
    double height;

    public:
    //parameterized constructor to initialize variables
    wall(double len,double hgt)
    :length{len}
    ,height{hgt}{
}
double calculatearea(){
    return length*height;
}
};
int main(){
    //create object and initialize data members
    wall wall1(10,5,8.6):
    wall wall2(8,5,6.3);
    cout<<"area  of wall1:"<<wall.calculatorarea()<<endl;
    cout<<"area of wall2:"<<wall2.calculatearea();
    return 0;
}