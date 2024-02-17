#include <iostream>
using namespace std;

//Using array in classes:

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item no. " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of your item with Id " << itemId[i] << " prise is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop kiraana;
    kiraana.initcounter();
    kiraana.setPrice();
    kiraana.setPrice();
    kiraana.setPrice();
    kiraana.displayPrice();

    return 0;
}