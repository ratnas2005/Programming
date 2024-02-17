#include <iostream>
using namespace std;

//Globle variable 'c'
int c=50;
int main(){
    //Scope resolution
    int a,b,c;//a,b,c is local variable :
    cout<<"The value of a is"<<endl;
    cin>>a;
    cout<<"The value of b is"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is"<<c<<endl;
    cout<<"The local variable c is"<<c<<endl;
    cout<<"The globle variable c is"<<::c<<endl;

    //float,double,long double literals
    float d=5.4f;
    long double e=5.4L;
    cout<<"The size of 5.4 is"<<sizeof(5.4)<<endl;
    cout<<"The size of 5.4f is"<<sizeof(5.4f)<<endl;
    cout<<"The size of 5.4L is"<<sizeof(5.4L)<<endl;

    //Reference variable
     int R=12;
     int &S=R;
    cout<<"The value of R is"<<R<<endl;
    cout<<"The value of S is"<<S<<endl;

    //Typecasting
    int g=17;
    float h=3.4;
    cout<<"The value of g is"<<g<<endl;
    cout<<"The value of g is"<<(float)g<<endl;//same as float(g)
    cout<<"The value of h is"<<(int)h<<endl;//same as int(h)
    
    cout<<"The expression is"<<g+h<<endl;
    cout<<"The expression is"<<g+(int)h<<endl;
    cout<<"The expression is"<<g+int(h)<<endl;

return 0;
}