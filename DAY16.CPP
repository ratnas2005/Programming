#include <iostream>
using namespace std;

//Function prototype
//Syntax:type function_name (arguments);
//int sum(int a, int b);//-->Acceptable
//int sum(int a, b);//-->Not Acceptable
int sum(int, int);//-->Acceptable
//void g(void);//-->Acceptable
void g();//-->Acceptable


int main(){
    int num1,num2;
    //num1 and num2 are actual parameters
    cout<<"Enter the first numaber"<<endl;
    cin>>num1;
    cout<<"Enter the second numaber"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();
return 0;
}

int sum(int a, int b){
//formal parametes a and b will be taking from actual parameters num1 and num2
    int c=a+b;
    return c;
}

void g(){
     cout<<"Hello! Good morning";
}