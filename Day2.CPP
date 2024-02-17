#include <iostream>
using namespace std;

int main()
{
    float a = 3.24, b = 5.56;
    int c = 3, d = 4;
    // Arithmatic Operator
    cout << "The value of a+b is" << a + b << endl;
    cout << "The value of a-b is" << a - b << endl;
    cout << "The value of a*b is" << a * b << endl;
    cout << "The value of a/b is" << a / b << endl;
    // Comparison Operator
    cout << "The value of c==d is " << (c == d) << endl;
    cout << "The value of c!=d is " << (c != d) << endl;
    cout << "The value of c<d is " << (c < d) << endl;
    cout << "The value of c>d is " << (c > d) << endl;
    cout << "The value of c<=d is " << (c <= d) << endl;
    cout << "The value of c>=d is " << (c >= d) << endl;

    return 0;
}