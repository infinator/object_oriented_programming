#include <iostream>

using namespace std;

class complex
{
    int a, b;

    public :

        void set_data(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void print_num()
        {
            cout << "Your Complex number is : " << a << " + i" << b << endl;
        }

        friend complex sum_complex(complex, complex);
};

complex sum_complex(complex i1, complex i2)
{
    complex s;
    s.set_data((i1.a + i2.a), (i1.b + i2.b));

    return s;
}

int main()
{
    complex c1, c2, sum;

    c1.set_data(1, 4);
    c2.set_data(2, 2);

    sum = sum_complex(c1, c2);
    sum.print_num();

    return 0;
}