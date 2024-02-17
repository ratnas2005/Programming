#include <iostream>
using namespace std;

int main(){
   // Selection control structure: Switch case statement
   int age;
   cout<<"Tell me your age"<<endl;
   cin>>age;

   switch (age)
   {
   case 11:
    cout<<"You are 11 year old"<<endl;
    break;
   case 24:
    cout<<"You are 24 year old"<<endl;
    break;
   case 15:
    cout<<"You are 15 year old"<<endl;
    break;

   default:
   cout<<"No special case"<<endl;
    break;
   }

   cout<<"Day 7 code"<<endl;
return 0;
}