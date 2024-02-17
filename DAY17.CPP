#include <iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}

//This will not swap a and b
void swap(int a,int b){//temp a b
    int temp=a;        //4    4 5
    a=b;               //4    5 5
    b=temp;            //4    5 4
}

//Call by reference using pointer
void swapPointer(int* a,int* b){//temp a b
    int temp=*a;               //4    4 5
    *a=*b;                    //4    5 5
    *b=temp;                  //4    5 4
}

//Call by reference using C++ reference variable
//int&
void swapreferencevar(int &a,int &b){//temp a b
    int temp=a;               //4    4 5
    a=b;                      //4    5 5
    b=temp;                   //4    5 4
    //return a;
}

int main(){
    int x =4, y =5;
   // cout<<"The sum of 5 and 4 is "<<sum(x,y)<<endl;
      cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
   // swap(x,y); //This will not swap a and b
   // swapPointer(&x,&y);//This will swap a and b using pointer reference
      swapreferencevar(x,y);//This will swap a and b using reference variable
   // swapreferencevar(x,y)=78;//This will swap a and b using reference variable
      cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

return 0;
}