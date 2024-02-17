#include <iostream>
using namespace std;

int main(){
    //Pointer in c++
    int x = 18;
    int* y = &x;
    //&---->(Address of) Operator
    cout<<"The address of x is "<<&x<<endl;
    cout<<"The address of x is "<<y<<endl;

    //*---->(Value at) Dereference Operator
    cout<<"The value at address y is "<<*y<<endl;


    //Pointer to pointer
    int** z = &y;
    cout<<"The address of y is "<<&y<<endl;
    cout<<"The address of y is "<<z<<endl;
    cout<<"The value at address z is "<<*z<<endl;
    cout<<"The value at address value_at(value_at(z)) is "<<**z<<endl;

return 0;
}