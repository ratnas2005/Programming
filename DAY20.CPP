#include <iostream>
using namespace std;

//Function overloading:
int add(float a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

//Calculate the volume of a cylinder
int volume(double r,int h){
    return (3.14*r*r*h);
}

//Calculate the volume of a cube
int volume(int a){
    return (a*a*a);
}

//Calculate the volume of a rectangle box
int volume(int l,int b,int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 4 and 6 is "<<add(4,6)<<endl;
    cout<<"The sum of 4 ,5 and 6 is "<<add(4,5,6)<<endl;
    cout<<"The volume of cube of side 4 is "<<volume(4)<<endl;
    cout<<"The volume of cuboid of 4 ,5 and 6 is "<<volume(4,5,6)<<endl;
    cout<<"The volume of cylinder of radius 5 and height 6 is "<<volume(5,6)<<endl;

return 0;
}