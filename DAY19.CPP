#include <iostream>
using namespace std;

//Recursion in C++ -->It is call itself:

int fib(int n){
    if(n<2){
        return 1;
    }
    else{
    return fib(n-2)+fib(n-1);
    }
}
//step by step fibonacci calculation
// fib(4)=fib(2)+fib(3);
// fib(4)=fib(0)+fib(1)+fib(1)+fib(2);
// fib(4)=1+1+1+1+1 = 5;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
//step by step factorial calculation
// factorial(4)= 4*factorial(3);
// factorial(4)= 4*3*factorial(2);
// factorial(4)= 4*3*2*factorial(1);
// factorial(4)=4*3*2*1;
// factorial(4) = 24;

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    

return 0;
}