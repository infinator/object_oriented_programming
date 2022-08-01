#include <iostream>

using namespace std;

class Base 
{
    int data_1;  // private, hence  non inheritable

    public :

        int data_2;

        void set_data();
        int get_data_1();
        int get_data_2();
};
void Base :: set_data(void)
{
    data_1 = 10;
    data_2 = 20;
}
int Base::get_data_1()
{
    return data_1;
}
int Base::get_data_2()
{
    return data_2;
}

class Derived : private Base  // keeping it private
{
    int data_3;

    public :

        void process();
        void display();
};
void Derived :: process()
{
    set_data();  // calling set_data in process
    data_3 = data_2 * get_data_1();
}
void Derived :: display()
{
    cout << "Value of data 1 is : " << get_data_1() << endl;
    cout << "Value of data 2 is : " << data_2 << endl;
    cout << "Value of data 3 is : " << data_3 << endl;
}

int main()
{
    Derived der;

    der.process();
    der.display();

    return 0;
}