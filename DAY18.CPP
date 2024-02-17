#include <iostream>
using namespace std;

//Inline function
inline int product(int a,int b){
    //Do not recomended to use below lines (static variable) with inline function
    //static variable
    //static int c = 1;//This excutes only once
    //c = c+1;//Next time this function is run, the value of c will be retained
    return a*b;
}

//Default arguments:
float moneyReceived(int currentmoney , float factor=1.02){
    return currentmoney * factor ;
}

//Constant argument:
//int strlength(const char *r){

//}

int main(){
    int a, b ;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"If u have "<<money<<" Rs in your bank account, u will recive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP:If u have "<<money<<" Rs in your bank account, u will recive "<<moneyReceived(money,1.08)<<" Rs after 1 year"<<endl;


return 0;
}