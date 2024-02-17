#include <iostream>
#include <string>
using namespace std;

// Nesting of member function

class binary
{
    // private:
    string a;
    void chk_bin(void);
    
public:
    void read(void);
    void ones_compliment();
    void display();
};

void binary::read()
{
    cout << "Enter a binary number" << endl;
    cin >> a;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '0' && a.at(i) != '1')
        {
            cout << "Incorret binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment()
{
    chk_bin();
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '0')
        {
            a.at(i) = '1';
        }
        else
        {
            a.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < a.length(); i++)
    {
        cout << a.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}