#include <iostream>

using namespace std;

int main()
{
    // Variable braced initialization

    int a;  // variable containing garbage value
    int b {};  // initializes to 0
    int c {18};  // inintializes to 18
    int d {20};  // inintializes to 18

    int e {c + d};  // expression as initializer

    // int f {3.5} // gives an error

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    // Functional variable initialization

    int x (5);  // prints 5

    int y (3.5);  // prints 3

    cout << x << endl;
    cout << y << endl;

    // Assignment initialization

    int p = 2;  // prints 5
    int q = 3.5;  // prints 3

    cout << p << endl;
    cout << q << endl;

    return 0;

    // 
}