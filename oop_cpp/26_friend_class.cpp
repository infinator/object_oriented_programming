#include <iostream>

using namespace std;

class complex;
class calculator;

class complex
{
    int a;
    int b;

    friend class calculator;

    public :

        complex();
        void set_data(int, int);
        void print_num();
};
complex::complex()
{
    a = 0;
    b = 0;
}
void complex::set_data(int n1, int n2)
{
    a = n1;
    b = n2;
}
void complex::print_num()
{
    cout << "The complex number is : " << a << " + i" << b << endl;
}

class calculator
{
    public :

        int sum_re(complex, complex);
        int sum_img(complex, complex);
};
int calculator::sum_re(complex i1, complex i2)
{
    return (i1.a + i2.a);
}
int calculator::sum_img(complex i1, complex i2)
{
    return (i1.b + i2.b);
}

int main()
{
    complex p, q;

    int p1 = 2;
    int q1 = 4;
    p.set_data(p1, q1);

    int p2 = 9;
    int q2 = 1;
    q.set_data(p2, q2);

    calculator c;
    int re_sum = c.sum_re(p, q);
    int img_sum = c.sum_img(p, q);

    cout << "Sum of Real parts is : " << re_sum << endl;
    cout << "Sum of Imaginary parts is : " << img_sum << endl;

    return 0;
}