#include <iostream>

using namespace std;

/*
Bad Practice :

class S
{
public:
    inline int square(int s) // redundant use of inline
    {
        // this function is automatically inline
        // function body
    }
};

The best programming style is to just write the prototype 
of function inside the class and specify it as an inline in 
the function definition.

class S
{
public:
	int square(int s); // declare the function
};

inline int S::square(int s) // use inline prefix
{

}

*/

class operation
{
    int a,b,add,sub,mul;
    float div;

    public:

        void get();
        void sum();
        void difference();
        void product();
        void division();
};
inline void operation::get()
{
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
}
inline void operation::sum()
{
    add = a+b;
    cout << "Addition of two numbers: " << a+b << "\n";
}
inline void operation::difference()
{
    sub = a-b;
    cout << "Difference of two numbers: " << a-b << "\n";
}
inline void operation::product()
{
    mul = a*b;
    cout << "Product of two numbers: " << a*b << "\n";
}
inline void operation::division()
{
    div = a/b;
    cout << "Division of two numbers: " << a/b << "\n" ;
}

int main()
{
    cout << "Program using inline function\n";

    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();

    return 0;
}