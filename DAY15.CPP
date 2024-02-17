#include <iostream>
using namespace std;

typedef struct student
{
    /* data */
    int rollno;
    char favchar;
}st;
union book
{
    /* data */
    int pages;
    char favchar;
    float prise;
};

int main(){
    st ratna;
    ratna.rollno=52;
    ratna.favchar='c';
    cout<<"Roll number is "<<ratna.rollno<<endl;
    cout<<"Favorite sub. is "<<ratna.favchar<<endl;

    union book math;
    math.pages=234;
    math.prise=400.09;
    cout<<math.prise<<endl;

//Enum in C++
enum meal{breakfast,lunch,dinner};
    meal m1=dinner;
    cout<<m1<<endl;
    cout<<(m1==1)<<endl;
    cout<<(m1==2)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
return 0;
}