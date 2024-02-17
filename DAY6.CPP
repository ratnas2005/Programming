#include <iostream>
using namespace std;

int main(){
    //Selection control structure: if else-if else ladder
    float age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    if((age<18)&&(age>2)){
    cout<<"You are kid"<<endl;
    }
    else if(age==18){
    cout<<"You are not kid"<<endl;
    }
    else if(age<2){
    cout<<"You are new born boby"<<endl;
    }
    else if(age==2){
    cout<<"You are not new born boby"<<endl;
    }
    else{
    cout<<"You are adult"<<endl;
    }
    
return 0;
}