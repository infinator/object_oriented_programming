#include <iostream>

using namespace std;

int main()
{
    // auto - let the compiler deduce the type

    auto v1 {12};
    auto v2 {13.0};
    auto v3 {12.5f};
    auto v4 {14.9l};
    auto v5 {'e'};

    // int modifier suffixes
    auto v6 {123u};  // unsigned
    auto v7 {123ul};  // unsigned long
    auto v8 {123ll};  // long long

    cout << typeid(v1).name() << endl;
    cout << typeid(v2).name() << endl;
    cout << typeid(v3).name() << endl;
    cout << typeid(v4).name() << endl;
    cout << typeid(v5).name() << endl;
    cout << typeid(v6).name() << endl;
    cout << typeid(v7).name() << endl;
    cout << typeid(v8).name() << endl;

    return 0;
}