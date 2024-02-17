#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    string favfood;

public:
    int legs;
    int eyes;
    string sound;
    void setData(string a, string b);
    void getData()
    {
        cout << "The name of animal is " << name << endl;
        cout << "The fav food of animal is " << favfood << endl;
        cout << "The legs of animal are " << legs << endl;
        cout << "The eyes of animal are " << eyes << endl;
        cout << "The sound of animal is " << sound << endl;
    }
};

void Animal ::setData(string a, string b)
{
    name = a;
    favfood = b;
}

int main()
{
    Animal dog;
    Animal cat;
    dog.setData("Tommy", "biscuit");
    dog.legs = 4;
    dog.eyes = 2;
    dog.sound = "bark";
    dog.getData();

    cat.setData("sweety", "milk");
    cat.legs = 4;
    cat.eyes = 2;
    cat.sound = "miau";
    cat.getData();

    return 0;
}