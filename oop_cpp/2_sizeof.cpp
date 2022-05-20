#include <iostream>

using namespace std;

int main()
{
    float num1 {1.12345678901234567890f};
    double num2 {1.12345678901234567890};
    long double num3 {1.12345678901234567890L};

    cout << "sizeof float : " << sizeof(float) << endl;
    cout << "sizeof double : " << sizeof(double) << endl;
    cout << "sizeof long double : " << sizeof(long double) << endl;

    return 0;
}