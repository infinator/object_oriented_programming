#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setprecision(22);

    double num1 {192400023};
    double num2 {1.92400023e8};
    double num3 {1.924e8};  // ommitting the lower 00023 for simplicity

    double num4 {0.00000000003498};
    double num5 {3.498e-11};  // 10^-11

    cout << "num1 is : " << num1 << endl;
    cout << "num2 is : " << num2 << endl;
    cout << "num3 is : " << num3 << endl;
    cout << "num4 is : " << num4 << endl;
    cout << "num5 is : " << num5 << endl;

    return 0;
}