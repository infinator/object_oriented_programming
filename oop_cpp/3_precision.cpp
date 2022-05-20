#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setprecision(22);  // cortrol the precision

    float num1 {1.12345678901234567891f};
    double num2 {1.12345678901234567891};
    long double num3 {1.12345678901234567891L};

    cout << "num1 is : " << num1 << endl;  // 7 digits
    cout << "num2 is : " << num3 << endl;  // 15-ish digits
    cout << "num3 is : " << num3 << endl;  // 15+ digits

    float num4 {123456789.01f};
    cout << "num4 is : " << num4 << endl;  // narrowed

    double num5 {123456789.01f};
    cout << "num5 is : " << num5 << endl;  // narrowed cuz of the suffix

    return 0;
}