#include <iostream>

using namespace std;

class complex 
{
    int a;
    int b;

    public :

        void set_data(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void set_data_by_sum(complex i1, complex i2)
        {
            a = i1.a + i2.a;
            b = i1.b + i2.b;
        }

        void print_number(void)
        {
            cout << "Your complex num is : " << a << " + i" << b << endl;
        }
};

int main()
{
    complex c1, c2, c3;

    c1.set_data(1, 2);
    c1.print_number();

    c2.set_data(3, 4);
    c2.print_number();

    c3.set_data_by_sum(c1, c2);
    c3.print_number();

    return 0;
}