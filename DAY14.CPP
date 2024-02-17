#include <iostream>
using namespace std;

int main(){
    int marks[] = {20,35,40,42,98};

    int hindiMarks[2];
    hindiMarks[0] = 34;
    hindiMarks[1] =67;

    cout<<"These are marks"<<endl;  
    cout<<marks[0]<<endl;  
    cout<<marks[1]<<endl;   
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    //You can change the value of an array
    hindiMarks[1]=90;
    cout<<"These are hindi marks"<<endl;
    cout<<hindiMarks[0]<<endl;
    cout<<hindiMarks[1]<<endl;

    //using for loop
    for(int i=0; i<2; i++){
        cout<<"The value of hindi marks "<<i<<" is "<<hindiMarks[i]<<endl;
    }

    //using while loop
   /* int i=0;
    while(i<5){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }*/

    //using do while loop
    int i=0;
    do{
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i<5);

    //Pointers and arrays
    int* x = marks;
    cout<<*x++<<endl;
    cout<<*x<<endl;
    cout<<*++x<<endl;
    
    /*cout<<*x<<endl;c
    cout<<*(x+1)<<endl;
    cout<<*(x+2)<<endl;
    cout<<*(x+3)<<endl;
    cout<<*(x+4)<<endl;*/

return 0;
}